/****************************************************************
*
* File name     : SQALPAT.c
* Author        : Linda J N
* Creation date : Thursday 23 September 2021 05:46:07 PM
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
  int n = 0;
  int a;

  scanf("%d", &a);

  for(unsigned int i = 0; i < a; i++) {
    for (int j = 5; j > 0; j--) {
      ++n;
      if (i % 2 == 0) printf("%d ", n);
      else printf("%d ", (i * 5) + j);
    }
    printl;
  }

  return 0;
}
