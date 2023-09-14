#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia números inteiros enquanto o usuário digitar um número maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somatório dos números
lidos.*/

int main()
{
    int contador = 1;
    int soma, numero;

    printf("digite numeros inteiros (quando quiser encerrar, digite um numero negativo): \n");

    while(contador){
        printf("digite um numero: ");
        scanf("%d", &numero);

        if(numero < 0) {
            break; // usado para sair do programa;
        }
        soma = soma + numero;
    }

    printf("a soma dos numeros eh: %d\n\n", soma);

    printf("Hello world!\n");
    return 0;
}
