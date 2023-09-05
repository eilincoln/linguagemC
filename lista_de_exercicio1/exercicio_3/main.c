#include <stdio.h>
#include <time.h>

int main() {
    int anoNascimento;
    time_t tempoAtual;
    struct tm *dataNascimento;

    // Solicita o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Obtém o tempo atual
    time(&tempoAtual);

    // Converte o tempo atual em uma estrutura de data
    dataNascimento = localtime(&tempoAtual);

    // Calcula a idade
    int idade = dataNascimento->tm_year + 1900 - anoNascimento;

    // Calcula a quantidade de segundos vividos
    time_t segundosVividos = difftime(tempoAtual, mktime(dataNascimento));

    // Calcula a quantidade de minutos, horas e dias vividos
    long minutosVividos = segundosVividos / 60;
    long horasVividas = minutosVividos / 60;
    long diasVividos = horasVividas / 24;

    // Apresenta os resultados
    printf("Idade: %d anos\n", idade);
    printf("Dias vividos: %ld dias\n", diasVividos);
    printf("Horas vividas: %ld horas\n", horasVividas);
    printf("Minutos vividos: %ld minutos\n", minutosVividos);
    printf("Segundos vividos: %ld segundos\n", segundosVividos);

    return 0;
}
