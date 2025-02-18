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
  
    printf("Desafio Super Trunfo\n");
    printf("1 - Cadastrar cartas\n");

    // Declaração das Variáveis
    char estado_A[50]; // Armazena o nome do Estado (até 49 caracteres)
    char nomeCidade_A1[50]; // Armazena o nome da cidade (até 49 caracteres)
    char codigoCarta[] = "A01"; // Código da carta fixo
    int populacao_A1; // Armazena a população da cidade
    int pontosTuristicos_A1; // Números de pontos turísticos
    float area_A1; // Armazena a Área em km²
    float pib_A1; // Armazena o PIB 

   // Cadastrar Estado - A
    printf("Digite o nome do estado A:\n");
    scanf("%s", &estado_A);  // Lê o nome do estado A (sem espaços)

   // Cadastrar a primeira cidade do estado A
    printf("Digite o nome da primeira cidade A1 do estado A:\n");
    scanf("%s", &nomeCidade_A1);  // Lê o nome da primeira cidade do estado A (sem espaços)
    
     // codigo da carta é (A01) 
     printf("codigoCarta %s - Cadastrada!\n", codigoCarta);
    
     // Cadastrar a população da cidade A1
    printf("Digite a população da cidade A1:\n");
    scanf("%d", &populacao_A1);  // Lê o nome da população da cidade (sem espaços)

    // Cadastrar pontos turisticos da cidade A1
    printf("Digite a quantidade de pontos turísticos da cidade A1:\n");
    scanf("%d", &pontosTuristicos_A1);  // Lê a quantidade de pontos turísticos da cidade (sem espaços)

    // Cadastrar a área da cidade A1
    printf("Digite a área da cidade A1:\n");
    scanf("%f", &area_A1);  // Lê a área da cidade (sem espaços)

    // Cadastrar o PIB da cidade A1
    printf("Digite o pib da cidade A1:\n");
    scanf("%f", &pib_A1);  // Lê o PIB da cidade (sem espaços)

    // Exibe as informações dos dados das cartas (com valores fixos e entradas do usuário)
    printf("\nInformações da cidade:\n");
    printf("Estado: %s\n", estado_A);
    printf("Nome: %s\n", nomeCidade_A1);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("População: %d habitantes\n", populacao_A1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_A1);
    printf("Área: %.2f km²\n", area_A1);
    printf("PIB: %.2f\n", pib_A1);

    return 0;  // Indica que o programa foi executado com sucesso
       
}
