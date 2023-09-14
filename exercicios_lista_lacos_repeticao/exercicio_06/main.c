#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que controle o acesso de pessoas em um restaurante. O restaurante
    tem uma capacidade de 40 vagas, que n�o poder� ser ultrapassada. O controle ser� feito
    atrav�s de c�digos, conforme a tabela abaixo:

        0 � Encerrar o programa
        1 � Entrar uma pessoa no restaurante
        2 � Sair uma pessoa do restaurante
        3 � Mostrar quantos lugares est�o dispon�veis
        4 � Mostrar o total de pessoas que entraram
        5 � Mostrar o total de pessoas que sa�ram

    Qualquer outro c�digo escrever que o c�digo � inv�lido. Uma observa��o: N�o poder� sair
    uma pessoa e ficar a quantidade de lugares dispon�veis negativa.
    Observa��o: N�o pode sair uma pessoa se n�o existir ningu�m dentro do restaurante, ou seja,
    a quantidade de lugares dispon�veis n�o pode ficar negativa.
*/

int main()
{
    int opcao;
    int entrarPessoa, ;
    int pessoasNoRestaurante, saiuPessoa;

    entrarPessoa = 0;
    pessoasNoRestaurante = 40;

    do {
        system("cls");
        printf("MENU DE OPCOES\n");
        printf("0 - Encerrar o programa\n");
        printf("1 - Entrar uma pessoa no restaurante\n");
        printf("2 - Sair uma pessoa do restaurant\n");
        printf("3 - Mostrar quantos lugares estao disponiveis\n");
        printf("4 - Mostrar o total de pessoas que entraram\n");
        printf("5 - Mostrar o total de pessoas que sairam\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("encerrando o programa!!\n\n");
                system("pause");
                break;
            case 1:
                if (pessoasNoRestaurante > 0) {
                pessoasNoRestaurante--;
                entrarPessoa++;
                } else {
                    printf("nao tem mais lugares disponiveis!!\n");
                    system("pause");
                }
                break;
            case 2:
                if (pessoasNoRestaurante < 5) {
                pessoasNoRestaurante++;
                saiuPessoa++;
                } else {
                    printf("ja sairam todos!!\n");
                    system("pause");
                }
                break;
            case 3:
                printf("Ainda tem %d lugares disponiveis\n", pessoasNoRestaurante);
                system("pause");
                break;
            case 4:
                printf("desde a abertura entraram %d pessoas", entrarPessoa);
                system("pause");
                break;
            case 5:
                printf("desde a abertura sairam %d pessoas", saiuPessoa);
                system("pause");
                break;
            default:
                printf("opcao invalida!");
                break;
        }
    } while(opcao != 0);
    printf("Hello world!\n");
    return 0;
}
