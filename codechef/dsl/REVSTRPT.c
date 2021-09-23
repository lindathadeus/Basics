/****************************************************************
*
* File name     : REVSTRPT.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 08:40:31 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printl printf("\n")

int main(int argc, char *argv[]) {
  int a;

  scanf("%d", &a);
  for(unsigned int i = 0; i < a; i++) {
    for(unsigned int j = 0; j < a; j++) {
      (j < a - i - 1) ? printfs(" ") : printfs("*");
    }
    printl;
  }

  return 0;
}
