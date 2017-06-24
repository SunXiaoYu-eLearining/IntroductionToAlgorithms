#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void print_array(int A[], int size){
    // output
    int i = 0;
    for(i; i<size; i++){
        printf("%d", A[i]);
    }
    printf("%s","\n");
}

void init_array(int A[], int size){
    // generate an array and output
    int i = 0;
    for(i; i<size; i++){
        A[i] = (rand() % 10 + 1) % 2;
    }
}

int binary_add(int A[], int B[], int C[], int size){
    int i = 0;
    for(i; i<MAX_SIZE; i++){
        int j = i+1;
        C[j] = A[i] + B[i];
        while(j>=0 && C[j] == 2){
            C[j-1]++;
            C[j] = 0;
            j--;
        }
        C[i+1] = (A[i] + B[i]) % 2;
    }
}

int main(){
    srand(time(0));
    int A[MAX_SIZE];
    int B[MAX_SIZE];
    int C[MAX_SIZE + 1] = {0};
    init_array(A, MAX_SIZE);
    init_array(B, MAX_SIZE);

    printf("%s\n", "INPUT:");
    printf("%s"," ");print_array(A, MAX_SIZE);
    printf("%s"," ");print_array(B, MAX_SIZE);

    printf("%s\n", "OUTPUT:");
    binary_add(A, B, C, MAX_SIZE);
    print_array(C, MAX_SIZE + 1);
}
