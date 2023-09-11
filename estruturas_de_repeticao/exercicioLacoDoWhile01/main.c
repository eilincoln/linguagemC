#include <stdio.h>
#include <stdlib.h>

/*  faça um programa que tenha o menu a baixo, e execute a iunstrução de cada opção do menu

    0 - Encerra o programa
    1 - Incluir uma panela no estoque;
    2 - Incluir uma chaleira no estoque;
    3 - Incluir um prato no estoque;
    4 - Relatório de inclusões

    Qualquer outro código é inválido

*/

int main()
{
    int opcao, contador_panela, contador_chaleira, contador_prato;

    contador_panela = contador_chaleira = contador_prato = 0;

    do {
        system("cls");
        printf("Menu de opcoes \n");
        printf("0 - encerrar o programa\n");
        printf("1 - incluir uma panela no estoque \n");
        printf("2 - incluir uma chaleira no estoque\n");
        printf("3 - incluir um prato no estoque \n");
        printf("4 - relatorio de inclusoes \n");
        printf("digite um codigo: ");
        scanf("%d", &opcao);


        switch(opcao){
        case 0:
            printf("encerrando o programa!");
            break;
        case 1:
            contador_panela++;
            break;
        case 2:
            contador_chaleira++;
            break;
        case 3:
            contador_prato++;
            break;
        case 4:
            printf("relatorio de inclusoes: \n");
            printf("panelas......: %d \n", contador_panela);
            printf("chaleiras....: %d \n", contador_chaleira);
            printf("pratos.......: %d \n", contador_prato);
            system("pause");
            break;
        default:
            printf("opcao invalida!\n");
            system("pause");
            break;

        }


    } while (opcao != 0);



    return 0;
}
