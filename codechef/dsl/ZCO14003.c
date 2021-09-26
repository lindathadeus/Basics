/****************************************************************
*
* File name     : ZCO14003.c
* Author        : Linda J N
* Creation date : Sunday 26 September 2021 07:17:25 PM
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

int main(int argc, char *argv[]) {
  unsigned long long N;

  scanf("%lld", &N);
  unsigned long long budget[N], max_sum[N];
  for(unsigned long long i = 0; i < N; i++) {
    scanf("%lld", &budget[i]);
    max_sum[i] = 0;
  }

  unsigned long long max = 0;
  for(unsigned long long i = 0; i < N; i++) {
    for(unsigned long long j = 0; j < N; j++) {
      if(budget[j] >= budget[i]) {
        max_sum[i] += budget[i];
        printf("cand=%lld, bud=%lld, sum=%lld\n", budget[i], budget[j], max_sum[i]);
      }
    }
  }
  for(unsigned long long i = 0; i < N; i++) {
    if (max < max_sum[i])
      max = max_sum[i];
  }

  printf("%lld\n", max);
  return 0;
}
