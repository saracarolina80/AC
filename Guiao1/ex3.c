#include <stdio.h>
#include <math.h>  // necessária para usar as funções matemáticas

int main  (void)
{
    int i;
    int n;
    printf("How many lines do you want? ");
    scanf("%d" , &n);

    printf( "---------------------------------\n");
    printf( "| Number | Square | Square Root |\n" );
    printf( "---------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf( " %4d    |%5d   |     %.1f\n", i, (i*i), sqrt(i) );
    }

    return 0;

}


