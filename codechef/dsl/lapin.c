/****************************************************************
*
* File name     : lapin.c
* Author        : Linda J N
* Creation date : Friday 24 September 2021 05:12:03 AM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printff(...) printf("%f", __VA_ARGS__)
#define printl printf("\n")
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))


void print_table(int *c_freq) {
  printl;
  for (int j = 0; j < 26; j++) {
    printf("%c:%d,", 'a' + j, c_freq['a' + j]);
  }
}

int 
main(int argc, char *argv[]) {
  int n = 0;
  int T;

  scanf("%d", &T);
  char a[T][1001];
  for(unsigned int i = 0; i < T; i++) {
    scanf("%s", a[i]);
    int len = strlen(a[i]);
    int c_freq[26];

    for (int j = 0; j < 26; j++) {
      c_freq['a' + j] = 0;
    }
  
    for (int j = 0; j < len/2; j++)
      c_freq[a[i][j]]++;
    
    print_table(c_freq);
 
    for (int j = (len % 2 != 0) ? len/2 + 1 : len/2; j < len; j++)
      c_freq[a[i][j]]--;
    
    print_table(c_freq);

    int lap = 0;
    for (int j = 0; j < len; j++) {
      printf("\nchar:%c,freq:%d,j:%d",a[i][j], c_freq[a[i][j]], j);
      if (c_freq[a[i][j]] == 1) {
        lap = 0;
        goto output;
      } else if (c_freq[a[i][j]] == -1) {
        if (j == len/2) {
          lap = 1;
        } else {
          lap = 0;
          goto output;
        }
      } else {
        lap = 1;
      }
    }

output:
    printf("%s\n", lap ? "YES": "NO");
  }
  return 0;
}
