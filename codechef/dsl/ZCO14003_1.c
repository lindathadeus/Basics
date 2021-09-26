/****************************************************************
*
* File name     : ZCO14003_1.c
* Author        : Linda J N
* Creation date : Sunday 26 September 2021 08:55:50 PM
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

#include <stdio.h>
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))

void merge (unsigned long long *a, unsigned long long n, unsigned long long m) {
    unsigned long long i, j, k;
    unsigned long long *x = malloc(n * sizeof (unsigned long long));
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
 
void merge_sort (unsigned long long *a, unsigned long long n) {
    if (n < 2)
        return;
    unsigned long long m = n / 2;
    merge_sort(a, m);
    merge_sort(a + m, n - m);
    merge(a, n, m);
}

int main(int argc, char *argv[]) {
  unsigned long long N, max_ = 0;

  scanf("%lld", &N);
  unsigned long long budget[N];
  for(unsigned long long i = 0; i < N; i++) {
    scanf("%lld", &budget[i]);
  }
  
  merge_sort(budget, N);

  for(unsigned long long i = 0; i < N; i++) {
    if (max_ < budget[i] * (N - i))
      max_ = budget[i] * (N - i);
  }

  printf("%lld\n", max_);
  return 0;
}
