#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    printf("digite o valor 1: ");
    scanf("%d", &valor1);
    printf("digite o valor 2: ");
    scanf("%d", &valor2);

    if(valor1 > valor2) {
        printf("o valor maior eh: %d \n", valor1);
    } else {
        printf("o valor maior eh: %d \n", valor2);
    }

    return 0;
}
