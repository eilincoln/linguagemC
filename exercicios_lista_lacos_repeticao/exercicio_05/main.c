#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia dois números inteiros quaisquer. No final escrever os números
    entre eles.
*/

int main()
{
    int numeroPrimeiro, numeroSegundo;
    int contador = 0;

    printf("Escreva dois numeros que vou te mostrar quais estao entre eles:\n\n");
    printf("digite o primeiro numero: ");
    scanf("%d", &numeroPrimeiro);
    printf("digite o segundo numero: ");
    scanf("%d", &numeroSegundo);

    for(contador = numeroPrimeiro; contador <= numeroSegundo; contador++) {
        printf("numero: %d\n", contador);
    }


    return 0;
}
