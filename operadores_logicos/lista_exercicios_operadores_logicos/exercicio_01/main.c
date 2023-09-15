#include <stdio.h>

int main() {
    float a, b, c;

    // Solicita os valores dos lados do triângulo
    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &b);

    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &c);

    // Verifica se os lados formam um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        // Verifica o tipo de triângulo
        if (a == b && b == c) {
            printf("É um triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Os lados fornecidos não formam um triângulo.\n");
    }

    return 0;
}
