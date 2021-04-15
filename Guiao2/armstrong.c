#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n1 , n2 , n3 , result , n = 99;

    for ( n3 = 0 ; n3 <= 9 ; n3++)
    {
        for (n2 = 0 ; n2 <= 9 ; n2++)
        {
            for (n1 = 0 ; n1 <= 9 ; n1++)
            {
                n++;
                result = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;

                if ( n == result)
                {
                    printf("%d\n", n);
                }
            }
        }

    }

}