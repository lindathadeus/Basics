/****************************************************************
*
* File name     : findmeli.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 07:24:57 PM
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

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
int main(int argc, char *argv[]) {
  int n = 0;
  int k;
  int *a;

  scanf("%d %d", &n, &k);
  a = (int *) malloc(n * sizeof(int *));
  for(int i = 0; i < n; i++) {

    scanf("%d", &a[i]);
    if (k == a[i]) {
      printfd(1);
      free(a);
      return 0;
    }
  }

  printfd(-1);
  free(a);
  return 0;
}
