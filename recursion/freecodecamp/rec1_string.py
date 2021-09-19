#!/usr/bin/env python
################################################################
# File name     : rec1_string.py
# Purpose       :
# Author        : Linda J
# Creation date : Sunday 19 September 2021 09:04:10 AM
################################################################

import sys

def reverse_string(inp):
    n = len(inp) - 1
    if inp == '':
        return inp
    #reverse string from start till n-1, as nth one is appended
    return inp[n] + reverse_string(inp[0:n])

def main():
    print(reverse_string(""))
    print(reverse_string("a"))
    print(reverse_string("abcd"))
    print(reverse_string("abcde"))
    print(reverse_string(''))
    return 0

if __name__ == "__main__":
    main()
