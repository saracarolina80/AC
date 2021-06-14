#include <stdio.h>

static int rec;

int t1( unsigned int n ) {

    if ( n == 0) {
        return 0;
    }
    else {
        n = t1(n / 4) + n;
        rec++;
        return n;
    }
}

int t2(unsigned int n) {

    if ( n <= 3) {
        return n;
    }
    else {

        rec+=2;
        n = t2(n / 4) + t2((n + 3) / 4) + n;
        return n;
    }
}

int t3( unsigned int n){


    if( n <= 3) {
        return n;
    }
    else {
        if (n % 4 == 0) {
            rec++;
            n = 2 * t3(n / 4) + n;
            return n;
        } else {
            rec += 2;
            n = t3(n / 4) + t3((n + 3) / 4) + n;
            return n;
        }
    }
}

int main(void){

    unsigned int r1;
    unsigned int r2;
    unsigned int r3;

    printf("\n--------TESTING-------\n");

    //T1
    printf("\n----FUNCAO T1----\n");
    printf("n:\tT1(n):\tNumChamadasRec:\n");

    int i;
    for( i = 0; i < 29 ; i++){
       
        rec=0;
        r1 = t1(i);
        printf("%d\t%d\t%d\n", i , r1, rec);
       
    }

    //T2
    printf("\n----FUNCAO T2----\n");
    printf("n:\tT2(n):\tNumChamadasRec: \n");

    int j;
    for(j = 0; j < 29 ; j++){
        
        rec=0;
        r2 = t2(j);
        printf("%d\t%d\t%d\n", j, r2, rec);
        
    }

    //T3
    printf("\n----FUNCAO T3----\n");
    printf("n:\tT3(n):\tNumChamadasRec:\n");

    int k;
    for( k =0 ; k < 29 ; k++){
        
        rec = 0;
        r3 = t3(k);
        printf("%d\t%d\t%d\n", k, r3, rec);
        
    }

    return 0;
}