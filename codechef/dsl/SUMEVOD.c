/****************************************************************
*
* File name     : SUMEVOD.c
* Author        : Linda J N
* Creation date : Tuesday 21 September 2021 11:31:29 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printflld(...) printf("%lld", __VA_ARGS__)
#define printl printf("\n")
int main(int argc, char *argv[]) {
  unsigned long long a, ev_sum = 0, od_sum = 0;

  scanf("%lld", &a);

  for(unsigned long long i = 1; i <= 2 * a; i++) {
    if (i % 2) {
      od_sum += i;
    } else {
      ev_sum += i;
    }
  }

  printflld(od_sum);
  printf(" ");
  printflld(ev_sum);

  return 0;
}
