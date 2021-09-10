/****************************************************************
* File name     : memoized_fibonacci.c
* Purpose       :
* Author        : Linda J
* Creation date : 10-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

unsigned int memoized_fib(unsigned int n);
unsigned int naive_fib(unsigned int n);

unsigned int naive_fib(unsigned int n) {
  if (n <= 2)
    return 1;
  return naive_fib(n - 1) + naive_fib(n - 2);
}

//memoized
unsigned int memoized_fib(unsigned int n) {
  unsigned int fib[n+1];

  fib[0] = 0;
  fib[1] = 1;
  fib[2] = 1;

  for (unsigned int i = 3; i <= n; i++) {
    fib[i] = fib[i -1] + fib[i - 2]; 
  }
  
  return fib[n];
}

int main(unsigned int argc, char *argv[], char *envp[]) {
  unsigned int n;
  printd(USR, "\tfibonacci\n\n");
  
  for(unsigned int i = 1; i < argc; i++) {
    n = atoi(argv[i]);
    printf("memoized_fib(%d) = %d\n", n, memoized_fib(n));
    printf("native_fib(%d) = %d\n", n, naive_fib(n));
  }
  return 0;
}
