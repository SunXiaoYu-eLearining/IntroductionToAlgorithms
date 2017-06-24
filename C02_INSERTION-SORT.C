#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

void insertion_sort(int A[], int size){
    // insertion sort
    int j = 1;
    for(j; j<size; j++){
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }
}

void print_array(int A[], int size){
    // output
    int i = 0;
    for(i; i<size; i++){
        printf("%d", A[i]);
        if(i < size - 1){
            printf("%s", ",");
        }
    }
    printf("%s","\n");
}

void init_array(int A[], int size){
    // generate an array and output
    int i = 0;
    for(i; i<size; i++){
        A[i] = rand() % size*10 + 1;
    }
}

int main(){
    srand(time(0));
    int A[MAX_SIZE];
    init_array(A, MAX_SIZE);
    print_array(A, MAX_SIZE);
    insertion_sort(A, MAX_SIZE);
    print_array(A, MAX_SIZE);
}
