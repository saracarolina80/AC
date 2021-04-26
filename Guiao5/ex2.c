#include <stdio.h>
#include <assert.h>

static unsigned int numComps;
static unsigned int numShifts;
static int size;


//Função para imprimir o conteúdo de um array
void printArray(int *array, int *n)
{
    printf("[");

    for(int i = 0; i < *n ; i++)
    {
        printf(" %d ",array[i]);
    }
    printf("]\n");
}

void checkArray(int *array , int *size) {

    int i;
    int j;
    int k;

    assert(*size > 1);

    for (i = 0 ; i < *size ; i++) {
        for (j = i + 1; j < *size; j++) {

            numComps++;

            if (array[i] == array[j] || array[i] % array[j] == 0 || array[j] % array[i] == 0 ) {

                (*size)--;
                for ( k = j ; k < *size ; k++ ) {
                    numShifts++;
                    array[k] = array[k+1];
                }
                j--;
            }
        }
    }
}

int main (void) {

    int a1[10] = {2, 2, 2, 3, 3, 4, 5, 8, 8, 9};
    int a2[10] = {7, 8, 2, 2, 3, 3, 3, 8, 8, 9};
    int a3[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int a4[10] = {3, 5, 7, 11, 13, 17, 23, 29, 31 , 33};



    printf("----TESTING-----\n");

    // a1
    size = 10;
    numComps = 0;
    numShifts = 0;
    printf("ARRAY1 inicial : ");
    printArray(a1, &size);
    checkArray(a1, &size);
    printf("ARRAY1 final :   ");
    printArray(a1, &size);
    printf("Numero de Comparacoes: %d - Numero de Shifts: %d\n\n", numComps, numShifts);

    // a2
    size = 10;
    numComps = 0;
    numShifts = 0;
    printf("FOR a2: \n");
    printf("ARRAY2 inicial : ");
    printArray(a2, &size);
    checkArray(a2, &size);
    printf("ARRAY2 final : ");
    printArray(a2, &size);
    printf("Numero de Comparacoes: %d - Numero de Shifts: %d\n\n", numComps, numShifts);

    //a3
    size = 10;
    numComps = 0;
    numShifts = 0;
    printf("ARRAY3 inicial : ");
    printArray(a3, &size);
    checkArray(a3, &size);
    printf("ARRAY3 final :   ");
    printArray(a3, &size);
    printf("Numero de Comparacoes: %d - Numero de Shifts: %d\n\n", numComps, numShifts);

    //a4
    size = 10;
    numComps = 0;
    numShifts = 0;
    printf("ARRAY4 inicial : ");
    printArray(a4, &size);
    checkArray(a4, &size);
    printf("ARRAY4 final :   ");
    printArray(a4, &size);
    printf("Numero de Comparacoes: %d - Numero de Shifts: %d\n\n", numComps, numShifts);
    
    return 0;
}