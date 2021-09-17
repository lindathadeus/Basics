/****************************************************************
* File name     : traveller_grid.c
* The problem is to count all the possible paths from top left to
* bottom right of a mXn matrix with the constraints that from 
* each cell you can either move only to right or down
* 
* Examples : 
* Input :  m = 2, n = 2;
* Output : 2
* There are two paths
* (0, 0) -> (0, 1) -> (1, 1)
* (0, 0) -> (1, 0) -> (1, 1)
* 
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

int max_path(int m, int n) {
  //base cases
  if ((m == 0) || (n == 0))
    return 0;

  if ((m == 1) && (n == 1))
    return 1;

  return max_path(m - 1, n) + max_path(m, n - 1);
}

int iterative_max_path(int m, int n) {
  //base cases
  for (int i = 0;i)
  if ((m == 0) || (n == 0))
    return 0;

  if ((m == 1) && (n == 1))
    return 1;

  return max_path(m - 1, n) + max_path(m, n - 1);
}

int main(int argc, char *argv[], char *envp[]) {
  int m[argc];
  if (argc != 3)
    return -1;

  for(unsigned int i = 1; i < argc; i++) {
    m[i] = atoi(argv[i]);
    printd(USR, "m%d = %d\n", i, m[i]);
  }

  printd(USR, "Maximum paths in the traveller's grid [%d x %d] = ", m[1], m[2]);
  printf("%d\n", max_path(m[1], m[2]));
  return 0;
}
