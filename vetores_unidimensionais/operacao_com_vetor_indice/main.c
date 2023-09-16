#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[6];
    int i;


    for(i = 0; i < 6; i++){
        printf("digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < 6; i++){
        printf("a %d nota foi: %.2f\n", i + 1, notas[i]);
    }


    printf("Hello world!\n");
    return 0;
}
