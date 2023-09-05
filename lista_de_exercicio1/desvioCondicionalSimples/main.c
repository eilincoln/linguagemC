#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;  // declaração das variaveis

    printf("digite um numero: "); // entrada de dados
    scanf("%d", &numero);

    if(numero > 0) {
        printf("numero digitado foi POSITIVO \n");
    }


    return 0;
}


