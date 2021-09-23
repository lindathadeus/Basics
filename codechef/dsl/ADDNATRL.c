/****************************************************************
*
* File name     : ADDNATRL.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 09:26:40 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printflld(...) printf("%lld", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printff(...) printf("%f", __VA_ARGS__)
#define printl printf("\n")
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))


int main(int argc, char *argv[]) {
  unsigned long long a, sum;

  scanf("%lld", &a);
  
  sum = 0;
  for(unsigned int i = 0; i < a; i++) {
    sum += i +1;
  }

  printflld(sum);

  return 0;
}
