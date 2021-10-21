/****************************************************************
*
* File name     : CARVANS.c
* Author        : Linda J N
* Creation date : Monday 18 October 2021 12:39:31 AM
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

void reverse(char *str) {
   if (*str != '\0')
   {
       reverse(str+1);
       printfc(*str);
   }   
}

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

int main(int argc, char *argv[]) {
  int n = 0;
  int T;

  scanf("%d", &T);
  for(unsigned int i = 0; i < T; i++) {
    scanf("%d", &n);
    int a[n], peak = 0, left, curr, right;
    for(unsigned int ii = 0; ii < n; ii++) {
      scanf("%d", &a[ii]);
      left = (ii - 1) > 0 ? ii - 1 : 0;
      curr = ii;
      right = ii + 1;

      if ((a[left] <= a[curr]) && (a[curr] >= a[right]))
        peak++;
    }
  }

	printf("BOTH");

  return 0;
}
