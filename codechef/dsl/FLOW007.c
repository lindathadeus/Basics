/****************************************************************
*
* File name     : FLOW007.c
* Author        : Linda J N
* Creation date : Thursday 23 September 2021 10:56:12 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int T;

  scanf("%d", &T);
  int a[T], rev[T], rem;
  for(int i = 0; i < T; i++) {
    scanf("%d", &a[i]);

    rev[i] = 0;
    while (a[i] > 0 ) {
      rem = a[i] % 10;
      a[i] /= 10;
      rev[i] = rev[i]*10 + rem;
    }
  }

  for(int i = 0; i < T; i++)
    printf("%d\n", rev[i]);

  return 0;
}
