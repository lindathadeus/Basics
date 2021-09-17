#!/usr/bin/env python
################################################################
# File name     : coin_change.py
# Purpose       :
# Author        : Linda J
# Creation date : 15-09-2021
################################################################

import sys

def acoin_change_path(bill_amount, nums):
    if (bill_amount == 0):
        return [];
    
    if (bill_amount < 0):
        return None;
    
    child =
    for i in range(len(nums)):
        child = coin_change_path(bill_amount - nums[i], nums)
        if child != None:
            child.append(nums[i]);
    
    return res;

def coin_change(bill_amount, nums):
    if (bill_amount == 0):
        return 1;
    
    if (bill_amount < 0):
        return 0;
    
    res = 0;
    for i in range(len(nums)): 
        res += coin_change(bill_amount - nums[i], nums);
    
    return res;

def main():
    print (coin_change(4, [1,2,3]))
    print (coin_change_path(4, [1,2,3]))
    return 0

if __name__ == "__main__":
    main()
