#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, resultado;          /*Declaração de variaveis*/

    printf("Digite um numero: ");         /*Coletando dados*/
    scanf("%d", &valorA);
    printf("Escolha outro numero: ");
    scanf("%d", &valorB);

    resultado = valorA + valorB;            /*Processamento de dados*/

    printf("O resultado eh: %d \n", resultado);  /*Mostrando dados na tela*/
    printf("%d + %d = %d", valorA, valorB, resultado);

    return 0;
}
