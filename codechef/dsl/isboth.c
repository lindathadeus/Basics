/****************************************************************
* File name     : isboth.c
* Purpose       :
* Author        : Linda J N
* Creation date : 17-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
  int a;

	scanf("%d", &a);
 
	if (!(a % 5) && !(a % 11))
    printf("BOTH");
  else if (!(a % 5) || !(a % 11))
		printf("ONE");
  else
    printf("NONE");

  return 0;
}
