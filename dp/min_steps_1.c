/****************************************************************
* File name     : min_steps_1.c
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
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define minimum(X, Y, Z) min(min(X, Y), Z)

int min_steps_1(int n) {
  if (n == 1)
    return 0;

  int steps = min_steps_1(n - 1);
  if (n % 3 == 0)
    steps = min(steps, min_steps_1(n / 3));
  if (n % 2 == 0)
    steps = min(steps, min_steps_1(n / 2));

  return 1 + steps;
}

int min_steps_1_old(int n) {
  if (n > 1) {
    if ((n % 6 == 0))
      return 1 + minimum(min_steps_1_old(n/2), min_steps_1_old(n/3), min_steps_1_old(n - 1));
    else if (n % 3 == 0)
      return 1 + min(min_steps_1_old(n/3), min_steps_1_old(n - 1));
    else if (n % 2 == 0)
      return 1 + min(min_steps_1_old(n/2), min_steps_1_old(n - 1));
    else
      return 1 + min_steps_1_old(n - 1);
	}
  return 0;
}

int min_steps_1_dp(int n) {

  int min_steps_1_dp[n + 1];

  min_steps_1_dp[0] = 0;
  min_steps_1_dp[1] = 0;
  for(int i = 2; i <= n; i++) {
    if ((i % 6 == 0))
      min_steps_1_dp[i] = 1 + minimum(min_steps_1_dp[i/2], min_steps_1_dp[i/3], min_steps_1_dp[i - 1]);
    else if (i % 3 == 0)
      min_steps_1_dp[i] = 1 + min(min_steps_1_dp[i/3], min_steps_1_dp[i - 1]);
    else if (i % 2 == 0)
      min_steps_1_dp[i] = 1 + min(min_steps_1_dp[i/2], min_steps_1_dp[i - 1]);
    else
      min_steps_1_dp[i] = 1 + min_steps_1_dp[i - 1];
  }

  return min_steps_1_dp[n];
}

int main(int argc, char *argv[], char *envp[]) {

  printf("%d\n", min_steps_1(1));
  printf("%d\n", min_steps_1(2));
  printf("%d\n", min_steps_1(3));
  printf("%d\n", min_steps_1(17));
  printf("%d\n", min_steps_1(10));
  printf("\n%d\n", min_steps_1_dp(17));
  printf("%d\n", min_steps_1_dp(3));
  printf("%d\n", min_steps_1_dp(2));
  printf("%d\n", min_steps_1_dp(1));
  return 0;
}
