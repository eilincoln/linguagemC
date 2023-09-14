#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que controle o acesso de pessoas em um elevador. O elevador permite
    a quantidade máxima de 15 pessoas ou 800 Kg, o que ocorrer primeiro. Quando o elevador
    estiver lotado deverá informar que está “LOTADO” e informar a quantidade de pessoas que
    está transportando e o seu peso total.

    Observação: Nenhuma das condições poderá ser ultrapassada, com o perigo do elevador cair
*/

int main() {
  // Definindo o limite máximo de peso e quantidade de pessoas
  int limite_peso = 800; // kg
  int limite_pessoas = 15;

  // Inicializando as variáveis
  int pessoas = 0;
  int peso = 0;

  // Loop para controlar o acesso ao elevador
  while (1) {
    // Solicitando a entrada de uma pessoa
    int nova_pessoa_peso;
    printf("Digite o peso da pessoa em kg: ");
    scanf("%d", &nova_pessoa_peso);

    // Verificando se a pessoa pode entrar no elevador
    if (pessoas < limite_pessoas && peso + nova_pessoa_peso <= limite_peso) {
      pessoas++;
      peso += nova_pessoa_peso;
      printf("Pessoa adicionada ao elevador.\n");
    } else {
      printf("Elevador lotado. \n Pessoas no elevador: %d. \nPeso total: %d kg.\n", pessoas, peso);
      break;
    }
  }
  return 0;
}

