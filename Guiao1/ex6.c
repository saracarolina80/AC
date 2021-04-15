#include<stdio.h>

void printArray( char* s , int a[])
{
    printf("%s: \n" ,  s);
    int i;

    for ( i = 0; i < 12 ; i++)
    {
        printf("%d ", a[i]);
    }
}

void cumSum( int a[12] , int b[12])
{
    int c=0;
    int i;

    for ( i = 0; i < 12; i++)
    {
        c += a[i];
        b[i] = c;
    }
}

int main(void)
{
    int a[] = {31,28,31,30,31,30,31,31,30,31,30,31};
     printArray("a" , a);

    int b[12];
    cumSum(a,b);
    printArray(" \nb" ,b);
}