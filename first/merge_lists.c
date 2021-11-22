#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} cell;

cell* insert(cell* L, int value) {
	cell *new = (cell *) malloc(sizeof(cell));
	new->data = value;
	new->next = NULL;

  cell *iter;
  if (L == NULL) {
    L = new;
  } else {
  //go to the end of the list
    iter = L;
    while (iter->next != NULL)
      iter = iter->next;
    iter->next = new;
  }
	
  return L;
}

void print(cell *L) {
	cell *i = L;
	while(i != NULL) {
		printf("%d->", i->data);
		i = i->next;
	}
}

void main() {
	cell *A = NULL, *B = NULL, *C = NULL;
	//A = [1, 2, 3, 4, 5];
	//B = [5, 4, 3, 2, 1];
	
	for (int i = 1; i <= 5; i++) {
		A = insert(A, i);
		B = insert(B, 5 - i + 1);
  }
  
	print(A);
  printf("\n");
	print(B);

  //count the elements in the list
  int count = 0;
  cell *iter = A;
  while(iter != NULL) {
    iter = iter->next;
    count++;
  }
  iter = B;
  while(iter != NULL) {
    iter = iter->next;
    count++;
  }
  printf("\nCount = %d\n", count);
  
  cell *iterA = A;
  cell *iterB = B;
  for (int i = 0; i < count; i++) {
    int tmp = 0;
    if (iterA == NULL) {
      if (iterB != NULL)
        tmp = iterB->data;
      printf("#1 i=%d A=NULL, B=%d, C=%d\n", i, iterB->data, tmp );
      break;
    } 
    if (iterB == NULL) {
      if (iterA != NULL)
        tmp = iterA->data;
      printf("#1 i=%d A=%d, B=NULL, C=%d\n", i, iterA->data, tmp );
      break;
    }

    if ((i % 2) == 0) {
      tmp = iterA->data;
      printf("#1 i=%d A=%d, B=%d, C=%d\n", i, iterA->data, iterB->data, tmp );
      iterA = iterA->next;
    }
    else {
      tmp = iterB->data;
      printf("#1 i=%d A=%d, B=%d, C=%d\n", i, iterA->data, iterB->data, tmp );
      iterB = iterB->next;
    }
    dd}

    C = insert(C, tmp);
	print(C);
  printf("\n");
    /*
    C = (cell *) malloc(sizeof(cell));
    C->data = tmp;
    C = C->next;
    */
  }
  printf("\n");
	print(C);
  printf("\n");

	free(A);
	free(B);
	free(C);
}
