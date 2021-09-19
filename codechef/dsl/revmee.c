/****************************************************************
*
* File name     : revmee.c
* Author        : Linda J N
* Creation date : Sunday 19 September 2021 06:33:20 PM
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

void reverse(int *arr) {
  if (*arr != NULL) {
    reverse(arr + 1);
    printf("%d ", *arr);
  }
}

int main(int argc, char *argv[]) {
  int n;
  int *a;

  scanf("%d", &n);

  a = (int *) malloc(n * sizeof(int));

  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(int i = 0; i < n/2; i++) {
    int t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
  reverse(a);
  free(a);
  return 0;
}
