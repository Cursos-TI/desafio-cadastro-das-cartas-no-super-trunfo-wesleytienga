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

      
        printf("carta 1:\n");
        printf("digite seu estado:\n");
        scanf("%s", &estado);

        printf("codigo: \n");
        scanf("%s", &codigo);

        printf("Nome Da Cidade: \n");
        scanf("%s", &cidade);

        printf("populaçao: \n");
        scanf("%f", &populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("Pib: \n");
        scanf("%f", &pib);

        printf("Pontos_Turisticos: \n");
        scanf("%d", &pontos_turisticos);


      
        printf("carta 2 \n");
        printf("digite o estado: \n");
        scanf("%s", &estado );

        printf("codigo: \n");
        scanf("%s", &codigo);

        printf("cidade: \n");
        scanf("%s", &cidade);

        printf("população: \n");
        scanf("%d",&populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("PIB: \n");
        scanf("%f", &pib);

        printf("pontos_turisticos: \n");
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
