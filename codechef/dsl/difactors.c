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

void factors_count(unsigned int N, unsigned int div) {
  unsigned int div_count = 0;
  char factors[2 * N];
  for (unsigned int i = 1; i <= N; i++) {
    if (N % i == 0) {
      div_count += 1;
      sprintf(factors, "%d ", i);
    }   
  }
  printf("%d\n%s", div_count, factors);
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
  printf("12: "); factors(12, 1);printf("\n");
  printf("\n\n12: "); factors_count(12, 1);
  //printf("4: "); factors_count(4, 1);
  //printf("10: "); factors_count(10, 1);
  return 0;
}
