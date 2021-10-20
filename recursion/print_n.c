/****************************************************************
*
* File name     : print_n.c
* Author        : Linda J N
* Creation date : Wednesday 20 October 2021 10:38:48 PM
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

void print_till(int n) {
  if (n > 0) {
    print_till(n - 1);
    printfd(n);
  }
}

int main(int argc, char *argv[]) {
  int n = 0;

  for(unsigned int i = 1; i < argc; i++) {
    n = atoi(argv[i]);
    print_till(n);
    printl;
  }

  return 0;
}
