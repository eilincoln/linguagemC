#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma;

    numero = soma = 0;

    while(numero != -1) {
        printf("Digite um numero para somar: ");
        scanf("%d", &numero);

        if(numero != -1) {
            soma = numero + soma;
        }
    }

    printf("a soma de todos os numeros foi: %d",soma);

    return 0;
}
