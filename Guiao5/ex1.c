#include <stdio.h>
#include <assert.h>

static unsigned int numOps;

/*
 * Indica se o array é uma sequência de termos sucessivos de uma sucessão geométrica.
 *
 * retorna 1 se cumprir os requisitos
 * retorna 0 se não cumprir
 */
double check(float* array, int n) {

    assert (n > 2);
    int i;
    float r;
    r = array[1] / array[0];
    numOps++;

    for ( i = 2 ; i < n ; i++) {
        numOps++;
        if(array[i] != r * array[i-1]){
             return 0;
        }
    }
    return 1;
}


int main(void) {

    int res;

    // TESTE
    float a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float a2[10] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
    float a3[10] = {1, 2, 4, 8, 5, 6, 7, 8, 9, 10};
    float a4[10] = {1, 2, 4, 8, 16, 6, 7, 8, 9, 10};
    float a5[10] = {1, 2, 4, 8, 16, 32, 7, 8, 9, 10};
    float a6[10] = {1, 2, 4, 8, 16, 32, 64, 8, 9, 10};
    float a7[10] = {1, 2, 4, 8, 16, 32, 64, 128, 9, 10};
    float a8[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 10};
    float a9[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    int size = 10;

    printf("----TESTING-----\n");

    // a1
    numOps = 0;
    res = check(a1, size);
    printf("For array 1: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a2
    numOps = 0;
    res = check(a2, size);
    printf("For array 2: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a3
    numOps = 0;
    res = check(a3, size);
    printf("For array 3: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a4
    numOps = 0;
    res = check(a4, size);
    printf("For array 4: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a5
    numOps = 0;
    res = check(a5, size);
    printf("For array 5: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);


    // a6
    numOps = 0;
    res = check(a6, size);
    printf("For array 6: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a7
    numOps = 0;
    res = check(a7, size);
    printf("For array 7: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a8
    numOps = 0;
    res = check(a8, size);
    printf("For array 8: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);

    // a9
    numOps = 0;
    res = check(a9, size);
    printf("For array 9: \n");
    printf("Result = %d \t Num_Operations = %d \n", res, numOps);



}
