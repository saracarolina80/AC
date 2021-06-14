#include <stdio.h>
#include <assert.h>

// Numero de multiplicações
int numM;


// Função Recursiva
int recursive (int n) {
    assert(n >= 0);

    int somatorio = 0;
    int result;

    if ( n == 0 || n == 1 || n == 2) {
        return 1;
    }
    else {

        // Somatorio
        for (int k = 0 ; k < n - 2 ; k++) {
            somatorio += recursive(k) * recursive(n - 3 - k);
            numM++;
        }
        result = recursive(n-1) + recursive(n - 2) + somatorio;

        return result;
    }
}

//Programação Dinâmica
int iterative( int n) {
    assert(n >= 0);

    int array[n + 1];

    for (int i = 0; i <= n; i++) {

       if ( i > 2){
            array[i] = 0;
            for (int k = 0; k <= i - 3; k++) {
                array[i] += array[k] * array[i - 3 - k];
                numM++;
            }
                array[i] += array[i - 1] + array[i - 2];
        }else {
            array[i] = 1;
       }
    }
    return array[n];
}

int main(void) {

    printf("\n--------TESTING-------\n");

    printf("\n----Funcao Recursiva----\n");
    printf("\nn\tF(n)\t\tMult(n)\n");

    for (int i = 0; i <= 25 ; i++) {
        numM = 0;
        int result = recursive(i);
        printf("%d\t%d\t\t%d\n", i, result, numM);
    }


    printf("\n----Funcao Iterativa----\n");
    printf("\nn\tF(n)\t\tMult(n)\n");

    for (int j = 0; j <= 25 ; j++) {
        numM = 0;
        int result = iterative(j);
        printf("%d\t%d\t\t%d\n", j, result, numM);
    }
}
