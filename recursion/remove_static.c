/****************************************************************
* File name     : FLOW007_1.c
* Purpose       :
* Author        : Linda J N
* Creation date : 19-03-2022
* Last modified : Sunday 20 March 2022 03:54:52 PM
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

/*
123
3 can be taken by mod
12 can be taken by div
*/

int rev_num(int n, int result) {
  int r = 0, output = 0;
  if (n == 0)
    return result;

  r = n % 10;
  n = n / 10;
  result = (result * 10) + r;
  printf("\n##n=%d, r=%d, result=%d", n, r, result);
  return rev_num(n, result);
}

int reverse_number(int n) {
  int result = 0, r;
  while (n) {
    r = n % 10;
    n = n / 10;
    result = (result * 10) + r;
    printf("\n##n=%d, r=%d, result=%d", n, r, result);
  }
  return result;
}

int main(int argc, char *argv[], char *envp[]){
  int T = 0;
  int N = 0, rev_N = 0;

  scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);
    rev_N = reverse_number(N);
    printf("ans=%d\n", rev_N);
    rev_N = rev_num(N, 0);
    printf("ans=%d\n", rev_N);
  }
  return 0;
}
