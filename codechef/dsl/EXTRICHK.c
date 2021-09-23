/****************************************************************
*
* File name     : EXTRICHK.c
* Author        : Linda J N
* Creation date : Thursday 23 September 2021 04:16:00 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfd(...) printf("%d", __VA_ARGS__)

int main(int argc, char *argv[]) {
  int a[3];

  for(unsigned int i = 0; i < 3; i++) {
    scanf("%d", &a[i]);
  }

  if ((a[0] + a[1] > a[2]) && (a[1] + a[2] > a[0]) &&
      (a[2] + a[0] > a[1]))
    if (a[0] == a[1]) {
      if (a[0] == a[2])
        printfd(1);
      else
        printfd(2);
	  } else if (a[1] == a[2]) {
        printfd(2);
    } else
        printfd(3);
  else
    printfd(-1);

  return 0;
}
