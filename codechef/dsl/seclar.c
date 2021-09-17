/****************************************************************
*
* File name     : seclar.c
* Author        : Linda J N
* Creation date : Saturday 18 September 2021 02:05:51 AM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned int n = 3, max, tmp = 0;
  unsigned int a[n];

  for(unsigned int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  max = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (a[i] > a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  printf("%d", a[1]);

  return 0;
}
