/****************************************************************
* File name     : difactors.c
* Purpose       :
* You are given a number N and find all the distinct factors of N

Input:

    First-line will contain the number N

Output:

    In the first line print number of distinct factors of N

    In the second line print all distinct factors in ascending order separated by space.

Constraints

    1 ≤ N ≤ 10^6

Sample Input 1:

4

Sample Output 1:

3
1 2 4

* Author        : Linda J N
* Creation date : 17-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
factors_count(int N, int div) {
  if (div <= N) {
    if (N % div == 0) {
      return 1 + factors_count(N, div + 1);
    }
  }
}

void factors(int N, int div) {
  if (div <= N) {
    if (N % div == 0) {
      printf("%d ", div);
    }
    factors(N, div + 1); 
  }
}

int main(int argc, char *argv[], char *envp[]) {
  printf("10: ");factors(10, 1);printf("\n");
  printf("3: ");factors(3, 1);printf("\n");
  printf("12: ");factors(12, 1);printf("\n");
  printf("12: %d\n", factors_count(12, 1));
  printf("4: %d\n", factors_count(4, 1));
  printf("10: %d\n", factors_count(10, 1));
  return 0;
}
