/****************************************************************
* File name     : fibonacci.c
* Purpose       :
* Author        : Linda J
* Creation date : 10-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define DEBUG
#define FATAL    (1)
#define ERR      (2)
#define WARN     (3)
#define INFO     (4)
#define DBG      (5)
#define CHK      (6)
#define USR      (7)

unsigned int  debug_level = USR;
#ifdef DEBUG
#define printd(level, ...) (level >= debug_level) ? printf(__VA_ARGS__) : 0
#else
#define printd(level, ...)
#endif

unsigned int iterative_fib(unsigned int n);
unsigned int naive_fib(unsigned int n);
unsigned int memoized_fib(unsigned int n, int *memo);

unsigned int naive_fib(unsigned int n) {
  if (n <= 2)
    return 1;
  return naive_fib(n - 1) + naive_fib(n - 2);
}

unsigned int iterative_fib(unsigned int n) {
  unsigned int fib[n+1];

  for (unsigned int i = 0; i <= 2; i++)
    fib[i] = 1;
  
  for (unsigned int i = 3; i <= n; i++)
    fib[i] = fib[i - 1] + fib[i - 2];
  
  return fib[n];
}

//memoized
unsigned int memoized_fib(unsigned int n, int *memo) {
  
  //check if n is present in memo, if yes, then return that
  for (int i = 0; i < n; i++)
    if (i == n)
      if (memo[i] != -1)
        return memo[i];

  if (n <= 2)
    return 1;

  memo[n] =  memoized_fib(n - 1, memo) + memoized_fib(n - 2, memo);
  return memo[n];
}

int main(unsigned int argc, char *argv[], char *envp[]) {
  unsigned int n, memo[50] = {-1};
  
  for(unsigned int i = 1; i < argc; i++) {
    n = atoi(argv[i]);
    printf("iterative_fib(%d) = %d\n", n, iterative_fib(n));
    printf("memoized_fib(%d) = %d\n", n, memoized_fib(n, memo));
    //printf("native_fib(%d) = %d\n", n, naive_fib(n));
  }
  return 0;
}
