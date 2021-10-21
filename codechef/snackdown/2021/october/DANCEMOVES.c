/****************************************************************
*
* File name     : DANCEMOVES.c
* Author        : Linda J N
* Creation date : Thursday 21 October 2021 10:41:56 PM
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
/*
Chef is present at position X and Chef's dance partner is at position Y. Chef can perform two kinds of dance moves.

If Chef is currently at position k, Chef can:

  1.  Moonwalk to position k+2, or
  2.  Slide to position k−1

Chef wants to find the minimum number of moves required to reach his partner. Can you help him find this number?
*/

int min_moves_y(int x, int y) {
  int slide = 999999, moonwalk = 999999;
  if (x == y)
    return 0;
  if (x > y) 
    slide = 1 + min_moves_y(x - 1, y);
  if (x < y) 
    moonwalk = 1 + min_moves_y(x + 2, y);
  return min(slide, moonwalk);
}

int main(int argc, char *argv[]) {
  int n = 0;
  int T;

  scanf("%d", &T);
  int x, y;
  for(unsigned int i = 0; i < T; i++) {
    scanf("%d %d", &x, &y);
		printfd(min_moves_y(x, y));
    printl;
  }

  return 0;
}
