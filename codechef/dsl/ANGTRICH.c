/****************************************************************
*
* File name     : ANGTRICH.c
* Author        : Linda J N
* Creation date : Thursday 23 September 2021 04:03:41 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printff(...) printf("%f", __VA_ARGS__)
#define printl printf("\n")

int main(int argc, char *argv[]) {
  int a, sum = 0;

  for(unsigned int i = 0; i < 3; i++) {
    scanf("%d", &a);
    sum += a;

    if(!a) {
      printf("NO");
      return 0;
    }
  }

  if (sum == 180)
    printf("YES");
  else
    printf("NO");

  return 0;
}
