/****************************************************************
*
* File name     : test.c
* Author        : Linda J N
* Creation date : Thursday 23 September 2021 09:32:01 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfd(...) printf("%d", __VA_ARGS__)
#define printl printf("\n")

int main(int argc, char *argv[]) {

  for(unsigned int i = 0; ; i++) {
    scanf("%d", &i);
    if (i == 42)
      break;
    printfd(i);
    printl;
  }

  return 0;
}
