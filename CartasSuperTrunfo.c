#include <stdio.h>

// Desafio Super Trunfo - 
// Tema 1 - Cadastro das Cartas




int main() {
      printf("Desafio de super trunfo\n");

      char estado[30];
      char codigo[5];  //ex. A01, A02....
      char cidade[50];
      int populacao;
      float area;
      float pib;
      char pontos_turisticos; 

      
        printf("Carta 1:\n");
        printf("Digite Seu Estado: ");
        scanf("%s", &estado);

        printf("Codigo: ");
        scanf("%s", &codigo);

        printf("Nome Da Cidade: ");
        scanf("%s", &cidade);

        printf("Populaçao: ");
        scanf("%f", &populacao);

        printf("Area: ");
        scanf("%f", &area);

        printf("Pib: ");
        scanf("%f", &pib);

        printf("Pontos_Turisticos: ");
        scanf("%d", &pontos_turisticos);




      
        printf("Carta 2 \n");
        printf("Digite o Estado: ");
        scanf("%s", &estado );

        printf("Codigo: ");
        scanf("%s", &codigo);

        printf("Nome Da Cidade: ");
        scanf("%s", &cidade);

        printf("população: ");
        scanf("%d",&populacao);

        printf("Area: ");
        scanf("%f", &area);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("pontos_turisticos: ");
        scanf("%f", &pontos_turisticos);
    



     









      
    

    
    
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
