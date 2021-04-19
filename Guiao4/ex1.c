#include <stdio.h>

static unsigned int numOps;

int check ( int* array , int n) {
    int i;
    int result = 0;
    for ( i = 1 ; i < n - 1 ; i++) {
        if (array[i] == array[i-1] + array[i+1]) {
            result++;
        }
        numOps++;
    }
    return result;
}

void printArray(int* array, int n) {
    printf("[");

    int i;

    for( i = 0 ; i < n  ; i++) {
        printf(" %d,",array[i] );
    }
    printf("]\n");
}

int main(void) {

    int res;

    // TESTE
    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[10] = {1, 2, 1, 4, 5, 6, 7, 8, 9, 10};
    int a3[10] = {1, 2, 1, 3, 2, 6, 7, 8, 9, 10};
    int a4[10] = {0, 2, 2, 0, 3, 3, 0, 4, 4, 0};
    int a5[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int a6[10] = {0, 4, 8, 9, 1, 1, 5, 6, 4, 11};

    int size = 10;

    printf("----TESTING-----\n");

    // a1
    numOps = 0;

    res = check(a1 , size);

    printf("For array 1: \n");

    printArray(a1 , size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

    // a2

    printf("For array 2: \n");

    printArray(a2 , size);

    numOps = 0;

    res = check(a2 , size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

    // a3
    printf("For array 3: \n");

    printArray(a3 , size);

    numOps = 0;

    res = check(a3 , size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

    // a4

    printf("For array 4: \n");

    printArray(a4 , size);

    numOps = 0;

    res = check(a4 , size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

    //a5
    printf("For array 5: \n");

    printArray(a5 , size);

    numOps = 0;

    res = check(a5, size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

    //a6
    printf("For array 6: \n");

    printArray(a6 , size);

    numOps = 0;

    res = check(a6, size);

    printf("Result = %d \t Num_Operations = %d \n" , res , numOps);

}

