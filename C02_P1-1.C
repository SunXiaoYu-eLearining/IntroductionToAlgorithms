#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 6

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

void insertion_sort(int A[], int size){
    // insertion sort
    int j = 1;
    for(j; j<size; j++){
        int key = A[j];
        int i = j - 1;
        print_array(A, MAX_SIZE);
        while(i >= 0 && A[i] > key){
            A[i+1] = A[i];
            print_array(A, MAX_SIZE);
            i--;
        }
        A[i+1] = key;
    }
}



int main(){
    srand(time(0));
    int A[MAX_SIZE] = {31, 41, 59, 26, 41, 58};
    insertion_sort(A, MAX_SIZE);
    print_array(A, MAX_SIZE);
}
