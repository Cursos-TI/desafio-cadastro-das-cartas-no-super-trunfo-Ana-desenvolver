#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// O jogo será composto por oito Estados, para cada Estado quatro cidades.
// Os Estados serão definidos com letras de A - H.
// Cada carta terá seu código e será definido por números de 1-4 acompanhado da letra correspondente ao Estado.
// Cada cidade terá suas variáveis e seus atributos respectivos.
// Exemplos de atributos: Estado,código da carta, nome da cidade, população...

int main() {
  
    printf("Bem vindo ao Desafio Super Trunfo\n");
    printf("1 - Cadastrar cartas\n");

    // Declaração das Variáveis
    char estado[50]; // Armazena o nome do Estado (até 49 caracteres)
    char nomeCidade[50]; // Armazena o nome da cidade (até 49 caracteres)
    char codigoCarta[10]; // Código da carta fixo
    int populacao; // Armazena a população da cidade
    int pontosTuristicos; // Números de pontos turísticos
    float area; // Armazena a Área em km²
    float pib; // Armazena o PIB 

   // Cadastrar Estado de A -  H
    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);  // Lê o nome do estado  (sem espaços)

   // Cadastrar a primeira cidade do estado 
    printf("Digite o nome da primeira cidade A1 do estado:\n");
    scanf("%s", &nomeCidade);  // Lê o nome da primeira cidade do estado (sem espaços)
    
     // codigo da carta  
     printf("codigoCarta %s - Cadastrada!\n", codigoCarta);
    
     // Cadastrar a população da cidade 
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);  // Lê o nome da população da cidade (sem espaços)

    // Cadastrar pontos turisticos da cidade 
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);  // Lê a quantidade de pontos turísticos da cidade (sem espaços)

    // Cadastrar a área da cidade 
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);  // Lê a área da cidade (sem espaços)

    // Cadastrar o PIB da cidade 
    printf("Digite o pib da cidade:\n");
    scanf("%f", &pib);  // Lê o PIB da cidade (sem espaços)

    // Exibe as informações dos dados das cartas (com valores de entradas do usuário)
    printf("\nInformações da cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Nome: %s\n", nomeCidade);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("População: %d habitantes\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);

    return 0;  // Indica que o programa foi executado com sucesso
       
}
