

#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que tenha o menu abaixo e execute as instruções de cada opção do menu:

    0 - encerra o programa
    1 - incluir uma panela no estoque
    2 - incluir uma chaleira no estoque
    3 - incluir um prato no estoque
    4 - relatório de inclusções

    qualquer outra informação é inválida
*/

int main()
{
    int opcao;
    int contadorPanela, contadorChaleira, contadorPrato;

    contadorPanela = contadorChaleira = contadorPrato = 0;

    do {
        system("cls");
        printf("MENU DE OPCOES: \n\n");

        printf("0 - encerra o programa\n");
        printf("1 - incluir uma panela no estoque\n");
        printf("2 - incluir uma chaleira no estoque\n");
        printf("3 - incluir um prato no estoque\n");
        printf("4 - relatorio de inclusoes\n");

        printf("DIGITE UMA OPCAO: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Encerrando o programa!!!!!!!!!!!!!");
                break;
            case 2:
                contadorPanela++;
                break;
            case 3:
                contadorChaleira++;
                break;
            case 4:
                contadorPrato++;
                break;
            case 5:
                printf("RELATORIO: ");
                printf("panelas:.......%d", contadorPanela);
                printf("chalerias:.....%d", contadorChaleira);
                printf("pratos:........%d", contadorPrato);
                system("pause");
                break;
            default:
                printf("opcao invalida");
                break;
        }


    } while (opcao != 0);

    return 0;
}
