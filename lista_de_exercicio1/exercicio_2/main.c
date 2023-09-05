#include <stdio.h>
#include <stdlib.h>

int main()
{

    float raio, altura = 0;
    float volume = 3.14159;
    float volume_lata = 0;

    printf("CALCULADORA DE VOLUME \n\n")/

    printf("digite o raio da lata: ");
    scanf("%f", &raio);
    printf("digite a altura da lata: ");
    scanf("%f", &altura);

    volume_lata = volume * raio * raio * altura;

    printf("O volume da lata eh: %.2f", volume_lata);

    return 0;
}
