/****************************************************************
* File name	: insertion_sort.c
* Purpose 	: 
* Author	: Linda J
* Creation date : 28-02-2021
* Last modified : Sunday 28 February 2021 08:51:32 PM
* To compile from the current directory: gcc insertion_sort.c
* To run : ./a.out 
****************************************************************/

#include <stdio.h>

#define print_array(a, n) \
    for (int i = 0; i < n; i++) \
        printf("%d,", a[i]);\
    printf ("\n");

int A[] = {5,4,3,2,1};

void sort() {
    int i, j, key;
    for (j = 1; j < 5; j++) {
        key = A[j];

        //insert key into sorted
        //list in hand
        i = j - 1;
        while ((A[i] > key) && (i >= 0)) {
            if (A[i] > key) {
                A[i + 1] = A[i];
                i -= 1;
            }
        }
        A[i + 1] = key;
    }
}

int main(int argc, char *argv[], char *envp[]){
    printf("Insertion Sort!\n");
    print_array(A, 5);
    sort(A);
    print_array(A, 5);
    return 0;
}
