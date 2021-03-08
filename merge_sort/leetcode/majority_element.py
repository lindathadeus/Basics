"""
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

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

A = [3,2,3]
print(A)
C = {}

def merge(L, R):
    i = 0
    j = 0

    

def majority_element(A):
    #base case
    if len(A) == !:
        C[A[0]] = 1        
        return A[0]

    mid = len(A) // 2
    L = A[:mid] #0 to mid - 1
    R = A[mid:] #mid to len(A) - 1

    L = majority_element(L)
    R = majority_element(R)

    return merge(L, R)
