/****************************************************************
*
* File name     : binary_n.c
* Author        : Linda J N
* Creation date : Wednesday 20 October 2021 11:15:14 PM
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
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))

void binary(int n) {
  if (n > 0) {
    binary(n / 2);
    printfd(n % 2);
  }
}

int main(int argc, char *argv[]) {
  int n = 0;

  for(unsigned int i = 1; i < argc; i++) {
    n = atoi(argv[i]);
    printf("arg[%d] = %d\n", i, n);
    binary(n);
    printl;
  }

  return 0;
}
