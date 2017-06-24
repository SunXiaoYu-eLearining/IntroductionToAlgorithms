#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

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

int find_number(int A[], int size, int &v){
    int i = 0;
    for(i; i < size; i++){
        if(v == A[i]){
            return i;
        }
    }
    v = -1;
    return -1;
}

int main(){
    srand(time(0));
    int A[MAX_SIZE];
    init_array(A, MAX_SIZE);
    int v = 77;

    printf("%s", "INPUT Array: ");
    print_array(A, MAX_SIZE);
    printf("%s%d\n", "INPUT Value: ", v);

    int i = find_number(A, MAX_SIZE, v);
    printf("%s%d%s%d\n", "OUTPUT: i=", i, ", v=", v);
}
