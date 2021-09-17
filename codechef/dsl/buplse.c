/****************************************************************
* File name     : buplse.c
* Purpose       :
* Author        : Linda J N
* Creation date : 17-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
  int a[4];
  for(unsigned int i = 0; i < 4; i++) {
    scanf("%d", &a[i]);
  }
  
  printf("%d", a[0]*a[2] + a[1]*a[3]);

  return 0;
}
