#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 1;

    do {
        printf("digite um numero: ");
        scanf("%d", &numero);
    } while (numero != 0); // é o único laço que termina com ;
    return 0;
}
