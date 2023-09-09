#include <stdio.h>
#include <stdlib.h>


// laço de repetição FOR
int main()
{
    int numero, resultado;

    for(int i = 0 ; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        resultado = numero * 4;
        printf("O numero multiplicado por 3 eh: %d \n", resultado);
    }
    return 0;
}
