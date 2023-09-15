#include <stdio.h>

int main() {
    float a, b, c;

    // Solicita os valores dos lados do tri�ngulo
    printf("Digite o valor do primeiro lado do tri�ngulo: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo lado do tri�ngulo: ");
    scanf("%f", &b);

    printf("Digite o valor do terceiro lado do tri�ngulo: ");
    scanf("%f", &c);

    // Verifica se os lados formam um tri�ngulo
    if (a + b > c && a + c > b && b + c > a) {
        // Verifica o tipo de tri�ngulo
        if (a == b && b == c) {
            printf("� um tri�ngulo equil�tero.\n");
        } else if (a == b || a == c || b == c) {
            printf("� um tri�ngulo is�sceles.\n");
        } else {
            printf("� um tri�ngulo escaleno.\n");
        }
    } else {
        printf("Os lados fornecidos n�o formam um tri�ngulo.\n");
    }

    return 0;
}
