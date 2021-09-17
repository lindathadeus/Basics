/****************************************************************
* File name	: factorization.cpp
* Author	: Linda J
* Creation date : 18-09-2021
****************************************************************/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define DEBUG
#define FATAL    (1)
#define ERR      (2)
#define WARN     (3)
#define INFO     (4)
#define DBG      (5)
#define CHK      (6)
#define USR	 (7)

using namespace std;

int  debug_level=USR;
#ifdef DEBUG
#define printd(level, ...) (level >= debug_level) ? printf(__VA_ARGS__) : 0
#else
#define printd(level, ...)
#endif

#include <bits/stdc++.h>
using namespace std;
 
// Recursive function to
// print factors of a number
void factors(int n, int i)
{
    // Checking if the number is less than N
    if (i <= n) {
        if (n % i == 0) {
            cout << i << " ";
        }
 
        // Calling the function recursively
        // for the next number
        factors(n, i + 1);
    }
}
 
// Driver code
int main()
{
    cout<<10<<":";factors(10, 1);cout<<endl;
    cout<<3<<":";factors(3, 1);cout<<endl;
    cout<<4<<":";factors(4, 1);cout<<endl;
    cout<<5<<":";factors(5, 1);cout<<endl;
    cout<<12<<":";factors(12, 1);cout<<endl;
}
