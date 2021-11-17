#include<stdlib.h>
#include<stdio.h>
 
typedef struct node{
	int data;
	struct node* next;
} cell;
 
typedef cell* list;
 
list insert(list a, int num){
 
	list iter, temp;
	int i = 0;
 
	if(a == NULL){
		a = (list) malloc(sizeof(cell));
		a->data = num;
		a->next = NULL;
	}
	else{
		iter = a;
 
		while(iter->next!=NULL){
			iter = iter->next;
		}
 
		temp = (list) malloc(sizeof(cell));
		temp->data = num;
		temp->next = NULL;
 
		iter->next = temp;
	}	
	return a;
}
 
list delete(list a, int pos){
 
	int i = 1;
	list temp,iter;
 
	if(a != NULL){
		iter = a;
 
		if(pos == 1){
			a = a->next;
			iter->next = NULL;
			free(iter);
		}
 
		else{
			while(i++ != pos-1)
				iter = iter->next;
			temp = iter->next;
			iter->next = temp->next;
			temp->next = NULL;
			free(temp);
		}
	}
	return a;
}
 
void print(list a){
	list temp = a;
 
	printf("List contains following nodeents : \n");
 
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
 
int main(int argC,char* argV[])
{
	list a = NULL;
	int i;
 
	if(argC == 1)
		printf("Usage : %s <list of integers to be inserted into the list>",argV[0]);
	else{
		for(i = 2;i <= argC; i++)
			a = insert(a, atoi(argV[i - 1]));
 
		print(a);
 
		do{
			printf("\nEnter position of nodeent to be removed (1-%d) : ",argC-1);
 
			scanf("%d",&i);
 
			if(i > 0 && i <= argC-1){
				a = delete(a, i);
				print(a);
			}
		}while(i > argC-1 ||i <= 0);
	}
	return 0;
}
