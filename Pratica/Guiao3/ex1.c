#include <stdio.h>
#include <math.h>

#include "elapsed_time.h"

/* definition of the 64-bit unsigned integer type */
typedef unsigned long long u64;

int op = 0;

u64 recursive ( unsigned int num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    else {
        op += 2;
        return 3 * (recursive(num - 1)) + 2 * (recursive(num - 2));
    }
}

u64 iterative ( unsigned int num) {

//    valor atual (inicialmente indefinido); o valor anterior ao anterior (que
//   inicialmente é 0 e em cada iteração passa a ser o valor anterior); o valor anterior (que inicialmente é 1 e
//  em cada iteração passa a ser o valor atual acabado de calcular).

    u64 n2 = 0 , n1 = 1 , at;

    if ( num == 0 ) {
        return 0;
    }
    if ( num == 1) {
        return 1;
    }
    for ( int i = 2 ; i <= num ; i++) {
        at = 3*(n1) + 2*(n2);
        n2 = n1;
        n1 = at;
        op =+ 2;
    }
    return at;

}

u64 recorrencia ( unsigned int num) {

   int i;
   double result;

    for ( i = 0; i <= num; i++)
    {
        double r1 = pow((0.5)*(3 + sqrt(17)),i);
        double r2 = pow((0.5)*(3 - sqrt(17)),i);
        result = (r1 - r2) / sqrt(17);
        op += 2;
    }

    return result;

}

// Termo mais importante da equação de recorrência
u64 importante (unsigned  int num) {

    int i;
    double result;

    for (i = 0 ; i <= num ; i++) {
        double r1 = pow((0.5)*(3+sqrt(17)),i);
        double r2 = 1 / (sqrt(17));
        result = round(r1 * r2);
        op += 2;
    }
    return result;
}

// Fórmula fechada usando a função exponencial
u64 exponencial (unsigned int num) {

    double c1 = 0.24253562503633297352;
    double c2 = 1.27019663313689157536;
    double result;
    int i;

    for ( i = 0; i <= num ; i++)
    {
        result = round(c1 * exp(c2 * i));
        op += 2;
    }
    return result;
}

int main (void)
{
    unsigned int i;

    printf(" ************************* RECURSIVE *************************\n");
    printf("  n  |         P(n)         |         op             |        elapsedTime        |\n");
    for (i = 0 ; i < 5 ; i++ )
    {
        (void) elapsed_time();
        u64 result = recursive(i);
        u64 dt = elapsed_time();
        printf(" %3d | %20ld | %22ld | %12.9f |\n", i , result , op , dt);
    }
    printf("-----------------------------------------------------------------\n");

    op = 0;
    printf(" ************************* ITERATIVE *************************\n");
    printf("  n  |         P(n)         |         op             |        elapsedTime        |\n");
    for (i = 0 ; i < 5 ; i++ )
    {
        (void) elapsed_time();
        u64 result = iterative(i);
        u64 dt = elapsed_time();
        printf(" %3d | %20ld | %22ld | %12.9f |\n", i , result , op , dt);
    }
    printf("-----------------------------------------------------------------\n");

    op = 0;
    printf(" ************************* RECORRENCIA *************************\n");
    printf("  n  |         P(n)         |         op             |        elapsedTime        |\n");
    for (i = 0 ; i < 5 ; i++ )
    {
        (void) elapsed_time();
        u64 result = recorrencia(i);
        u64 dt = elapsed_time();
        printf(" %3d | %20ld | %22ld | %12.9f |\n", i , result , op , dt);
    }
    printf("-----------------------------------------------------------------\n");

    op = 0;
    printf(" ************ TERMO + IMPORTANTE DA EQUACAO DE RECORRENCIA *************************\n");
    printf("  n  |         P(n)         |         op             |        elapsedTime        |\n");
    for (i = 0 ; i < 5 ; i++ )
    {
        (void) elapsed_time();
        u64 result = importante(i);
        u64 dt = elapsed_time();
        printf(" %3d | %20ld | %22ld | %12.9f |\n", i , result , op , dt);
    }
    printf("-----------------------------------------------------------------\n");

    op = 0;
    printf(" ************ EXPONENCIAL *************************\n");
    printf("  n  |         P(n)         |         op             |        elapsedTime        |\n");
    for (i = 0 ; i < 5 ; i++ )
    {
        (void) elapsed_time();
        u64 result = exponencial(i);
        u64 dt = elapsed_time();
        printf(" %3d | %20ld | %22ld | %12.9f |\n", i , result , op , dt);
    }
    printf("-----------------------------------------------------------------\n");

}
