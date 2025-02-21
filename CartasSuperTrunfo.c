#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// O jogo será composto por oito Estados, para cada Estado quatro cidades.
// Os Estados serão definidos com letras de A - H.
// Cada carta terá seu código e será definido por números de 1-4 acompanhado da letra correspondente ao Estado.
// Cada cidade terá suas variáveis e seus atributos respectivos.
// Exemplos de atributos: Estado,código da carta, nome da cidade, população...
// A primeiro momento será feito apenas o cadastro de duas cartas.

int main() {
  
    printf("Bem vindo ao Desafio Super Trunfo\n");
    printf("Cadastro - primeira carta\n");

    // Declaração das Variáveis
    char estado[50]; // Armazena o nome do Estado (até 49 caracteres)
    char nomeCidade[50]; // Armazena o nome da cidade (até 49 caracteres)
    char codigoCarta[10]; // Armazena o código da carta
    int populacao; // Armazena a população da cidade
    int pontosTuristicos; // Números de pontos turísticos
    float area; // Armazena a Área em km²
    float pib; // Armazena o PIB 

   // Cadastrar Estado de A -  H
    printf("Digite a letra do primeiro estado:\n");
    scanf("%s", &estado);  // Lê o nome da primeira letra do estado  (sem espaços)

   // Cadastrar a primeira cidade do estado 
    printf("Digite o nome da primeira cidade do primeiro estado:\n");
    scanf("%s", &nomeCidade);  // Lê o nome da primeira cidade do primeiro estado (sem espaços)
    
   // Cadastrar o código da carta (Contendo números de 1 - 4 e a letra correspondente ao primeiro estado) 
     printf("1 carta:\n");
     printf("Digite o código da carta (primeira cidade do primeiro estado):\n");
     scanf("%s", &codigoCarta);

     printf("codigoCarta %s - Cadastrada!\n", codigoCarta);
    
   // Cadastrar a população da cidade 
    printf("Digite a população da primeira cidade:\n");
    scanf("%d", &populacao);  // Lê o nome da população da primeira cidade (sem espaços)

   // Cadastrar pontos turísticos da cidade 
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);  // Lê a quantidade de pontos turísticos da cidade (sem espaços)

   // Cadastrar a área da cidade 
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);  // Lê a área da cidade em km² (sem espaços)

   // Cadastrar o PIB da cidade 
    printf("Digite o pib da primeira cidade:\n");
    scanf("%f", &pib);  // Lê o PIB da primeira cidade (sem espaços)

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

int main() {
  

    printf("Cadastro - segunda carta\n");

    // Declaração das Variáveis
    char estado[50]; // Armazena o nome do Estado (até 49 caracteres)
    char nomeCidade[50]; // Armazena o nome da cidade (até 49 caracteres)
    char codigoCarta[10]; // Armazena o código da carta
    int populacao; // Armazena a população da cidade
    int pontosTuristicos; // Números de pontos turísticos
    float area; // Armazena a Área em km²
    float pib; // Armazena o PIB 

   // Cadastrar Estado de A -  H
    printf("Digite a letra do segundo estado:\n");
    scanf("%s", &estado);  // Lê o nome da letra do segundo estado  (sem espaços)

   // Cadastrar a primeira cidade do segundo estado 
    printf("Digite o nome da primeira cidade do segundo estado:\n");
    scanf("%s", &nomeCidade);  // Lê o nome da primeira cidade do segundo estado (sem espaços)
    
     // Cadastrar o código da carta (Contendo números de 1 - 4 e a letra correspondente ao primeiro estado) 
     printf("1 carta:\n");
     printf("Digite o código da carta (primeira cidade do segundo estado):\n");
     printf("codigoCarta %s - Cadastrada!\n", codigoCarta);
    
     // Cadastrar a população da cidade 
    printf("Digite a população da primeira cidade do segundo estado:\n");
    scanf("%d", &populacao);  // Lê o nome da população da primeira cidade do segundo estado (sem espaços)

    // Cadastrar pontos turísticos da cidade 
    printf("Digite a quantidade de pontos turísticos da primeira cidade do segundo estado:\n");
    scanf("%d", &pontosTuristicos);  // Lê a quantidade de pontos turísticos da primeira cidade do segundo estado (sem espaços)

    // Cadastrar a área da cidade 
    printf("Digite a área da primeira cidade do segundo estado:\n");
    scanf("%f", &area);  // Lê a área da primeira cidade do segundo estado em km² (sem espaços)

    // Cadastrar o PIB da cidade 
    printf("Digite o pib da primeira cidade do segundo estado:\n");
    scanf("%f", &pib);  // Lê o PIB da primeira cidade do segundo estado (sem espaços)

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