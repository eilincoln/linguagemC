#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia n�meros inteiros enquanto o usu�rio digitar um n�mero maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somat�rio dos n�meros
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
