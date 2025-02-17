#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// O jogo será composto por oito Estados, para cada Estado quatro cidades.
// Os Estados serão definidos com letras de A - H.
// Cada cidade terá suas variáveis e seus atributos respectivos.
// Exemplos de atributos: Estado,código da carta, nome da cidade, população...

int main() {
  
    printf("Desafio Super Trunfo\n");
    printf("1 - Cadastrar cartas\n");

    // Declaração das Variáveis
    char estado_A[50]; // Armazena o nome do Estado (até 49 caracteres)
    char nomeCidade_A1[50]; // Armazena o nome da cidade (até 49 caracteres)
    char códigoCarta[] = "A01"; // Código da carta fixo
    int população_A1; // Armazena a população da cidade
    int pontosTurísticos_A1; // Números de pontos turísticos
    float área_A1; // Armazena a Área em km²
    float pib_A1; // Armazena o PIB 

    


    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
