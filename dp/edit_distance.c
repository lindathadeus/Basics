/****************************************************************
*
* File name	: edit_distance.c
* Author        : Linda J N
* Creation date : 11-11-2021
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
#define minimum(X, Y, Z)  ((X) < min(Y, Z) ? (X) : min(Y, Z))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))

#include <string.h>

int edit_distance(char *a, int m, char *b, int n) {
    if (m == 0)
        return n;
  
    if (n == 0)
        return m;
  
    if (a[m - 1] == b[n - 1])
        return edit_distance(a, m - 1, b, n - 1);
  
    return 1
           + minimum(edit_distance(a, m, b, n - 1), // Insert
                 edit_distance(a, m - 1, b, n), // Remove
                 edit_distance(a, m - 1, b, n - 1) // Repmce
             );
}

int main(int argc, char *argv[], char *envp[]) {
  char *a = "password";
  char *b = "basswora1";
  printf("\n%d\n", edit_distance(a, 8, b, 9));
  return 0;
}
