#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia do teclado 25 valores inteiros e escreva no final a soma dos
valores que foram lidos.*/

int main()
{
    int numero, soma;

    for(int contador = 1; contador <= 25; contador++){
        printf("digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("o somatorio eh: %d \n", soma);

    printf("Hello world!\n");
    return 0;
}
