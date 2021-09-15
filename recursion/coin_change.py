#!/usr/bin/env python
################################################################
# File name     : coin_change.py
# Purpose       :
# Author        : Linda J
# Creation date : 15-09-2021
################################################################

import sys

def coin_change(bill, lst):
    print("")

def combinationSum(nums, target):
    if (target == 0):
        return 1;
    
    res = 0;
    for i in range(len(nums)): 
        if (target >= nums[i]):
            res += combinationSum4(nums, target - nums[i]);
    
    return res;

def combinationSum4(nums, N):
  nums, comb_sum = sorted(nums), [1] + [0] * (N)
  for i in range(N + 1): 
      for x in nums:
          if x  > i: break
          if x == i: comb_sum[i] += 1
          if x  < i: comb_sum[i] += comb_sum[i - x]
  return comb_sum[N]

def main():
    print (combinationSum4([1,2,3], 4))
    print (combinationSum4([1,2,3], 0))
    print (combinationSum([1,2,3], 4))
    return 0

if __name__ == "__main__":
    main()
