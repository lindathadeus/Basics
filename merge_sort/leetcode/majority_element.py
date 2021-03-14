"""
Given an array nums of size n, return the majority element.

The majority element appears more [n/2] times. It always exists in the testcases

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Constraints:

n == nums.length
1 <= n <= 5 * 104
-231 <= nums[i] <= 231 - 1

Follow-up: Could you solve the problem in linear time and in O(1) space?
"""

A = [2, 1, 2, 1, 2]

U = {}

def majority_element():
  return U
  for i in U:
    if U[i] >= len(A)/2:
      return U[i]

def merge(L, R):
    for i in L:
        if i in U:
          U[i] += 1
        else:
          U[i] = 1
      
    for i in R:
        if i in U:
          U[i] += 1
        else:
          U[i] = 1
      
    return U

def divide(A): #updates U
    #base case
    if len(A) <= 1:
        if A[0] in U:
          U[A[0]] += 1
        else:
          U[A[0]] = 1
        return A
    
    #divide by 2
    mid = len(A) // 2 #floor of middle
    L = A[:mid] #L = A[0..mid-1]
    R = A[mid:] #R = A[mid..n-1], n is the size of A

    #recurse
    L = divide(L) #divide the given list
    R = divide(R)

    #merge and return
    merge(L, R)
    return majority_element()

print(A)
A=divide(A)
print(A)
