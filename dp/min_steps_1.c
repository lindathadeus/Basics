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

#define DEBUG
#define FATAL    (1)
#define ERR      (2)
#define WARN     (3)
#define INFO     (4)
#define DBG      (5)
#define CHK      (6)
#define USR      (7)

int  debug_level = USR;
#ifdef DEBUG
#define printd(level, ...) (level >= debug_level) ? printf(__VA_ARGS__) : 0
#else
#define printd(level, ...)
#endif

int max_steps_1(int n) {
  if (n == 1)
    return 0;
  if ((n % 2) == 0) {
    return max_steps_1(n) + 1;
  }
}

int main(int argc, char *argv[], char *envp[]) {
  int n = 0;

  for(unsigned int i = 1; i < argc; i++) {
    n = atoi(argv[i]);
    printd(USR, "arg[%d] = %d\n", i, n);
  }

  return 0;
}
