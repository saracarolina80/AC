#include <stdio.h>
#include <math.h>  // necessária para usar as funções matemáticas

int main  (void)
{
    int i;
    int n;
    int m;
    int esp;

    printf("What is the smallest angle? ");
    scanf("%d", &n);

    printf("What is the greater angle? ");
    scanf("%d", &m);

    if (n > m) {
        printf("ERROR: first angle must be smaller than the second one! ");
        return 0;
    }


    printf("Spacing? ");
    scanf( "%d" , &esp);

    FILE  *file;
    file = fopen("ex4.txt" , "w");   // open file

    if (file == NULL)
    {
        printf("FILE DOES NOT EXIST! \n");
    }

   // FOR TERMINAL
    printf( "-----------------------------\n");
    printf( "| ang | Sin(ang) | Cos(ang) |\n" );
    printf( "-----------------------------\n");

   //  FOR FILE
    fprintf(file, "-----------------------------\n");
    fprintf( file, "| ang | Sin(ang) | Cos(ang) |\n" );
    fprintf( file,  "-----------------------------\n");

    for (i = n; i <= m; i +=esp)
    {
        // FOR TERMINAL
        printf( "%4d   %.5f       %.5f\n", i, sin(i), cos(i) );

        // FOR FILE
        fprintf( file,"%4d   %.5f       %.5f\n", i, sin(i), cos(i) );
    }

    return 0;

}


