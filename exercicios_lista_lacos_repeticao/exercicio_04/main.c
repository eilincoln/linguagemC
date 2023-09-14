#include <stdio.h>
#include <stdlib.h>

/*

Escreva um programa que leia 20 valores inteiros e escreva no final a soma dos valores
positivos e a média dos valores negativos.

*/

int main() {

    int contador, numero, soma_positivo, soma_negativo, media_negativo, contador_negativo;

    contador = numero = soma_positivo = soma_negativo = media_negativo = 0;
    contador_negativo = 0;

    for(contador = 1; contador <= 20; contador++){
        printf("digite um numero inteiro: ");
        scanf("%d", &numero);

        if(numero > 0) {
            soma_positivo = soma_positivo + numero;
        } else if(numero < 0) {
            contador_negativo++;
            soma_negativo = soma_negativo + numero;
            media_negativo = soma_negativo / contador_negativo;
        }
    }

    printf("a soma dos positivos.....: %d\n", soma_positivo);
    printf("a media dos negativos....: %d\n", media_negativo);

    printf("Hello world!\n");
    return 0;
}
