/****************************************************************
* Problem       : Given a list of N coins, their values (V1, V2, … , VN), and the total sum S. Find the minimum number of coins the sum of which is S (we can use as many coins of one type as we want), or report that it’s not possible to select coins in such a way that they sum up to S.
* Input: coins[] = {25, 10, 5}, V = 30
* Output: Minimum 2 coins required
* Author        : Linda J
* Creation date : 11-09-2021
****************************************************************/
#include <stdio.h>

#define DEBUG
#define FATAL    (1)
#define ERR      (2)
#define WARN     (3)
#define INFO     (4)
#define DBG      (5)
#define CHK      (6)
#define USR      (7)

int  debug_level = USR;
#ifdef DEBUG
#define printd(level, ...) (level >= debug_level) ? printf(__VA_ARGS__) : 0
#else
#define printd(level, ...)
#endif

int min_coin_count(int *value, int sum) {
  int val[] = {1, 2, 5}
  return 2;
}

int main(int argc, char *argv[], char *envp[]) {
  printd(USR, "Hiii\n");
  return 0;
}
