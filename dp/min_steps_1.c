/****************************************************************
* File name     : memoization.c
* Purpose       : On a positive integer, you can perform any one of the following 3 steps.

    Subtract 1 from it. ( n = n - 1 )
    If its divisible by 2, divide by 2. ( if n % 2 == 0 , then n = n / 2 )
    If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3 ).

Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1

* Author        : Linda J
* Creation date : 11-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define minimum(X, Y, Z) min(min(X, Y), Z)

#define value 842
int memo[value + 1];

int memoization(int n) {
  if (n == 1) return 0;
  
  if (memo[n] != -1) return memo[n];

  int steps = 1 + memoization(n - 1);
  if (n % 2 == 0)
    steps = min(steps, 1 + memoization(n / 2));
  if (n % 3 == 0)
    steps = min(steps, 1 + memoization(n / 3));

  memo[n] = steps;
  return memo[n];
}

int dp(int n) {
  int dp[n + 1];

  dp[1] = 0;
  for(int i = 2; i <= n; i++) {
		dp[i] = 1 + dp[i - 1];
    if (i % 2 == 0)
      dp[i] = min(dp[i], 1 + dp[i / 2]);
    if (i % 3 == 0)
      dp[i] = min(dp[i], 1 + dp[i / 3]);
  }

  return dp[n];
}

int main(int argc, char *argv[], char *envp[]) {

  for (int i = 0; i < value + 1; i++) memo[i] = -1;

  printf("memoization(%d) = %d\n", value, memoization(value));
  printf("dp(%d) = %d\n", value, dp(value));

  return 0;
}
