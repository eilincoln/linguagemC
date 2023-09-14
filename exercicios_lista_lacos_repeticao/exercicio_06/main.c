#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que controle o acesso de pessoas em um restaurante. O restaurante
    tem uma capacidade de 40 vagas, que não poderá ser ultrapassada. O controle será feito
    através de códigos, conforme a tabela abaixo:

        0 – Encerrar o programa
        1 – Entrar uma pessoa no restaurante
        2 – Sair uma pessoa do restaurante
        3 – Mostrar quantos lugares estão disponíveis
        4 – Mostrar o total de pessoas que entraram
        5 – Mostrar o total de pessoas que saíram

    Qualquer outro código escrever que o código é inválido. Uma observação: Não poderá sair
    uma pessoa e ficar a quantidade de lugares disponíveis negativa.
    Observação: Não pode sair uma pessoa se não existir ninguém dentro do restaurante, ou seja,
    a quantidade de lugares disponíveis não pode ficar negativa.
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
