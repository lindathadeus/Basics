/****************************************************************
*
* File name	: CARVANS.c
* Author        : Linda J N
* Creation date : 18-10-2021
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

void merge (int *a, int n, int m) {
    int i, j, k;
    int *x = malloc(n * sizeof (int));
    for (i = 0, j = m, k = 0; k < n; k++) {
        x[k] = j == n      ? a[i++]
             : i == m      ? a[j++]
             : a[j] < a[i] ? a[j++]
             :               a[i++];
    }
    for (i = 0; i < n; i++) {
        a[i] = x[i];
    }
    free(x);
}
 
void merge_sort (int *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort(a, m);
    merge_sort(a + m, n - m);
    merge(a, n, m);
}

void reverse(char *str) {
   if (*str != '\0')
   {
       reverse(str+1);
       printfc(*str);
   }   
}

int main(int argc, char *argv[]) {
  int n = 0, left, peak_count, right;
  int T;

  scanf("%d", &T);
  for(unsigned int i = 0; i < T; i++) {
    scanf("%d", &n);
    int a[n];
    peak_count = 0;
    for(unsigned int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }
    for(unsigned int j = 0; j < n; j++) {
      left = (j >= 1) ? j : -1;
      right = (j <= n - 2) ? j : -1;

      if((left > -1) && (right > -1))
      if ((a[left] <= a[j]) && (a[right] <= a[j]))
        peak_count++;

    }
    printf("%d\n", peak_count);
  }


  return 0;
}
