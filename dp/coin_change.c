/****************************************************************
* File name     : coin_change.c
* Purpose       :
* Author        : Linda J N
* Creation date : 12-09-2021
****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define def_for(n) for(int i = 1; i < n; i++)

int
coin_change_truth(int bill_amount, int *list) {
  if (bill_amount == 0)
    return 1;

  if (bill_amount < 0)
    return 0;

  size_t len = sizeof(list) / sizeof(list[0]);
  int children_truth;

  children_truth = 0;
  for (int i = 0; i < len; i++) {
    children_truth = children_truth || coin_change_truth(bill_amount - list[i], list);
  }

  if (children_truth == 1)
    return 1;
  return 0;
}

int 
coin_change_combo(int bill_amount, int *list) {
  if (bill_amount == 0)
    return 1; //return empty set

  if (bill_amount < 0)
    return 0;

  size_t len = sizeof(list) / sizeof(list[0]);
  int children_path_count;

  children_path_count = 0;
  for (int i = 0; i < len; i++) {
    children_path_count += coin_change_combo(bill_amount - list[i], list);
  }

  return children_path_count;
}

int 
coin_change_combo_count(int bill_amount, int *list, int len) {
  if (bill_amount == 0)
    return 1;

  if (bill_amount < 0)
    return 0; //return empty set

  int children_path_count = 0;
  for (int i = 0; i < len; i++) {
    children_path_count += coin_change_combo_count(bill_amount - list[i], list, len);
  }

  return children_path_count;
}

int main(int argc, char *argv[], char *envp[]) {
  int n[] = {1, 2, 3}, bill_amount = 4;
  int len = sizeof(n) / sizeof(n[0]);

  printf("bill amount = %d, %s\n", bill_amount, coin_change_truth(bill_amount, n) ? "True" : "False" );

  printf("bill amount = %d, %d\n", bill_amount, coin_change_combo_count(bill_amount, n, len));
  
  return 0;
}
