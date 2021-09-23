/****************************************************************
*
* File name     : trivalch.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 08:11:05 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printff(...) printf("%f", __VA_ARGS__)
#define printl printf("\n")
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))

int main(int argc, char *argv[]) {
  int n = 3, sum[n];
  int a[n];

  sum[0] = 0;
  sum[1] = 0;
  sum[2] = 0;
  for(unsigned int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  if ((a[0] + a[1] > a[2]) && (a[1] + a[2] > a[0]) &&
      (a[2] + a[0] > a[1]))
    printfs("YES");
  else
    printfs("NO");

  return 0;
}
