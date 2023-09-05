#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB;
    int soma, dividir, subtrair, multiplicar, resto;

    printf("Digite o valor A: ");
    scanf("%d", &valorA);
    printf("Digite o valor B: ");
    scanf("%d", &valorB);

    soma = valorA + valorB;
    dividir = valorA / valorB;
    subtrair = valorA - valorB;
    multiplicar = valorA * valorB;
    resto = valorA % valorB;

    printf("A soma foi: .......... %d \n", soma);
    printf("A divisao foi:........ %d \n", dividir);
    printf("A subtracao foi:...... %d \n", subtrair);
    printf("A multiplicacao foi:.. %d \n", multiplicar);
    printf("O resto foi:.......... %d \n", resto);


    return 0;
}
