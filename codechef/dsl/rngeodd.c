/****************************************************************
*
* File name     : rngeodd.c
* Author        : Linda J N
* Creation date : Saturday 18 September 2021 02:55:23 AM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned int a[2];

  for(unsigned int i = 0; i < 2; i++) {
    scanf("%d", &a[i]);
  }

  for(unsigned int i = a[0]; i <= a[1]; i++) {
    if (i % 2)
      printf("%d ", i);
  }

  return 0;
}
