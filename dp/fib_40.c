/****************************************************************
* File name     : fib_40.c
* Purpose       :
* Author        : Linda J
* Creation date : 10-09-2021
* Last modified : Friday 10 September 2021 09:03:45 PM
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

unsigned int
fib(unsigned int n) {
  unsigned int fib[n];

  fib[0] = 1;
  fib[1] = 1;

  for (unsigned int i = 2; i <= n ; i++) {
    fib[i] = fib[i -1] + fib[i - 2];
  }

  return fib[n];
}

int main(int argc, char *argv[], char *envp[]) {
	int n = 0;
	for (int i = 1; i < argc; i++) {
		n = atoi(argv[i]);
  	printd(USR, "The %d-th fibonacci no. is %d\n", n, fib(n));
	}
  return 0;
}
