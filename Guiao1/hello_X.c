#include <stdio.h>

int main(void)
{
    char name[50];
    char apelido[50];

    printf("What is your first name? \n ");
    scanf("%s" , name);


    printf("Qual o apelido? \n");
    scanf("%s" , apelido);


    printf("Hello %s %s !" , name , apelido);

}