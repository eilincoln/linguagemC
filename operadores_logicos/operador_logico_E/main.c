#include <stdio.h>
#include <stdlib.h>

/*
    faça um programa que leia um numero inteiro qualquer e veja se esse numero está dentro da faixa de 0 a 100;

*/

int main()
{
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    if( numero >= 0 && numero <= 100){
        printf("seu numero esta entre 0 e 100\n");
    } else {
        printf("seu numero esta FORA do range\n");
    }


    printf("Hello world!\n");
    return 0;
}
