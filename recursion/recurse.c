/****************************************************************
* File name     : recurse.c
* Purpose       :
* Author        : Linda J
* Creation date : 11-09-2021
* Last modified :
****************************************************************/
#include <stdio.h>

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

void recurse(int n) {
  if (n <= 1)
    return;
  recurse(n - 1);
}

int main(int argc, char *argv[], char *envp[]) {
  printd(USR, "Hiii\n");
  recurse(10);
  return 0;
}
