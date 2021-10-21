/****************************************************************
*
* File name     : MINLCM1.c
* Author        : Linda J N
* Creation date : Friday 22 October 2021 12:14:24 AM
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

unsigned long long
gcd (unsigned long long u, unsigned long long v) {
  if (u < 0) u = -u;
  if (v < 0) v = -v;
  if (v) while ((u %= v) && (v %= u));
  return (u + v);
}

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

//#define lcm(a, b) a / gcd(a,b) * b
int main(int argc, char *argv[]) {
  int n = 0;
  int T;

  scanf("%d", &T);
  unsigned long long x, k, a[x*k], iii = 0;
  for(unsigned int i = 0; i < T; i++) {
    scanf("%lld %lld", &x, &k);

    for (unsigned long long ii = x; ii < (x * k) - 1; ii++)
      for (unsigned long long jj = x + 1; jj < x * k; jj++)
        a[iii++] = ii / gcd(ii, jj) * jj;

    //merge_sort(a, x*k);
    printf("%lln %lln\n", a[0], a[x * k - 1]);
  }

  return 0;
}
