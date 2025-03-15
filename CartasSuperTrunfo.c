#include <stdio.h>

int população1,população2, turismo1, turismo2;
float area1, area2, PIB1, PIB2;
char estado1, estado2;
char código1, código2 [3];
char nome1, nome2 [50];

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Daniel

int main() {
    printf("Desafio Super Trunfo\n");

    printf("Carta 01:\n");
    printf("Inicial do Estado: \n");
    scanf("%c", &estado1);

    printf("Código da Carta: \n");
    scanf("%s", &código1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("População Total: \n");
    scanf("%d", &população1);

    printf("Área Total em KM: \n");
    scanf("%f]", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Nº de Pontos Turísticos: \n");
    scanf("%d", &turismo1);


    
    printf("Carta 02:\n");
    printf("Inicial do Estado: \n");
    scanf("%c", &estado2);

    printf("Código da Carta: \n");
    scanf("%s", &código2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("População Total: \n");
    scanf("%d", &população2);

    printf("Área Total em KM: \n");
    scanf("%f]", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Nº de Pontos Turísticos: \n");
    scanf("%d", &turismo2);


    printf("Resultados:\n");

    printf("Carta 01:\n");
    printf("Inicial - %c\n", estado1);
    printf("Código da Carta - %s\n", código1);
    printf("Nome da Cidade - %s\n", nome1);
    prinft("População Total - %d\n", população1);
    printf("Área Total em KM - %f\n", area1);
    printf("PIB - %f\n", PIB1);
    printf("Nº de Pontos Turísticos - %d\n", turismo1);

    printf("Carta 01:\n");
    printf("Inicial - %c\n", estado2);
    printf("Código da Carta - %s\n", código2);
    printf("Nome da Cidade - %s\n", nome2);
    prinft("População Total - %d\n", população2);
    printf("Área Total em KM - %f\n", area2);
    printf("PIB - %f\n", PIB2);
    printf("Nº de Pontos Turísticos - %d\n", turismo2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
