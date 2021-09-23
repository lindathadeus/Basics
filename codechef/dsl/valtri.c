/****************************************************************
*
* File name     : valtri.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 06:27:17 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printff(...) printf("%f", __VA_ARGS__)
//not working yet #define uprintf(...) printf("%c", __VA_ARGS__)
#define printl printf("\n")
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))

void reverse(char *str) {
   if (*str != '\0')
   {
       reverse(str+1);
       printfc(*str);
   }   
}

int main(int argc, char *argv[]) {
  int a;

  scanf("%d", &a);

  if (!(a % 5) || !(a % 6))
    printf("YES");
  else
    printf("NO");

  return 0;
}
