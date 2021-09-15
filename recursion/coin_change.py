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

def combinationSum4(nums, target):
  nums, combs = sorted(nums), [1] + [0] * (target)
  for i in range(target + 1): 
      for num in nums:
          if num  > i: break
          if num == i: combs[i] += 1
          if num  < i: combs[i] += combs[i - num]
  return combs[target]

def main():
    print (combinationSum4([1,2,3], 4))
    print (combinationSum4([1,2,3], 0))
    return 0

if __name__ == "__main__":
    main()
