#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
            
        char estadoa;
        char codigodacartaa[4];
        char nomedacidadea[15];
        int populacaoa;  
        float areaa;
        float piba; 
        int pontosturisticosa; 

        char estadob;
        char codigodacartab[4];
        char nomedacidadeb[15];
        int populacaob;  
        float areab;
        float pibb; 
        int pontosturisticosb; 
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Digite os dados da Primeira Carta:\n");

        printf("Estado (letra de A a H): ");
        scanf(" %c", &estadoa);
        
        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigodacartaa);
    
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", nomedacidadea); // Lê até a quebra de linha
    
        printf("População: ");
        scanf("%d", &populacaoa);
    
        printf("Área (em km²): ");
        scanf("%f", &areaa);
    
        printf("PIB (em bilhões): ");
        scanf("%f", &piba);
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosturisticosa);

    

        printf("Digite os dados da Segunda Carta:\n");

        printf("Estado (letra de A a H): ");
        scanf(" %c", &estadob);
        
        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigodacartab);
    
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", nomedacidadeb); // Lê até a quebra de linha
    
        printf("População: ");
        scanf("%d", &populacaob);
    
        printf("Área (em km²): ");
        scanf("%f", &areab);
    
        printf("PIB (em bilhões): ");
        scanf("%f", &pibb);
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosturisticosb);


     // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        printf("\nPrimeira Carta:\n");
        printf("Estado: %c\n", estadoa);
        printf("Código: %s\n", codigodacartaa);
        printf("Nome da Cidade: %s\n", nomedacidadea);
        printf("População: %d\n", populacaoa);
        printf("Área: %.2f km²\n", areaa);
        printf("PIB: %.2f bilhões de reais\n", piba);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticosa);
    
        printf("\nPrimeira Carta:\n");
        printf("Estado: %c\n", estadoab);
        printf("Código: %s\n", codigodacartab);
        printf("Nome da Cidade: %s\n", nomedacidadeb);
        printf("População: %d\n", populacaob);
        printf("Área: %.2f km²\n", areab);
        printf("PIB: %.2f bilhões de reais\n", pibb);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticosb);

    return 0;
}
