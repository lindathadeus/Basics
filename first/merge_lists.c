#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} cell;

void insert(cell* L, int value) {
	L = (cell *) malloc(sizeof(cell));
	L->data = value;
	L->next = NULL;
	printf("inserted %d,", value);
}

void print(cell *L) {
	cell *i = L;
	while(i != NULL) {
		printf("%d->", i->data);
		i = i->next;
	}
}

void main() {
	cell *A = NULL, *B = NULL;
	//A = [1, 2, 3, 4, 5];
	//B = [5, 4, 3, 2, 1];
	
	for (int i = 1; i <= 5; i++)
		insert(A, i);
	
	print(A);
	free(A);
	free(B);
}
