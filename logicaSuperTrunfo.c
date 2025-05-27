#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    
    char nomePais1[50], nomePais2[50];  // Nome do país, até 49 caracteres
    unsigned long int populacao1, populacao2;  // População dos países
    float area1, area2;  // Área dos países
    float pib1, pib2;  // Produto Interno Bruto dos países
    int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos
    int primeiraEscolhaUsuario, segundaEscolhaUsuario; //Variável para armazenar a primeira e segunda escolha do usuário
    int resultadoComparacao1, resultadoComparacao2;
    

    // ---------- Entrada de dados da primeira carta ----------
    printf("*** Primeira carta. ****\n\n");

    printf("Digite o nome do país: ");
    fgets(nomePais1, 50, stdin);  // Lê o nome completo do país
    nomePais1[strcspn(nomePais1, "\n")] = '\0'; //Revome a quebra de linha que o fgets armazena no final da string

    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Lê a população 

    printf("Digite a área: (Km²)");
    scanf("%f", &area1);  // Lê a área do país

    printf("Digite o PIB: ");
    scanf("%f", &pib1);  // Lê o PIB do país

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);  // Lê número de pontos turísticos

    // ---------- Cálculo da primeira carta ----------
    float densidadeDemografica1 = (float)populacao1 / area1;  // Densidade demográfica

     getchar(); // Limpa buffer

    
    // ---------- Entrada de dados da segunda carta ----------
    printf("\n\n*** Segunda carta.***\n\n");

    printf("Digite o nome do país: ");
    fgets(nomePais2, 50, stdin);  // Lê o nome completo do pais
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Lê a população
    
    printf("Digite a área: (Km²)");
    scanf("%f", &area2);  // Lê a área
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);  // Lê o PIB
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);  // Lê o número de pontos turísticos
    
    // ---------- Cálculo da segunda carta ----------
    float densidadeDemografica2 = (float)populacao2 / area2;  // Densidade populacional
    
    
    // ---------- Escolha dos atributos ----------
    

    printf("\nDigite o número correspondente ao primeiro atributo que deseja comparar: 1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    scanf("%d", &primeiraEscolhaUsuario); // Lê a escolha do usuário para o atributo de comparação

    switch (primeiraEscolhaUsuario)// Início da estrutura de decisão para comparar os atributos
    {
    case 1:// Caso o usuário escolha comparar a População

    printf("Você escolheu comparar a população\n");
    resultadoComparacao1 = populacao1 > populacao2 ? 1 : 0;
    break;

  case 2:// Caso o usuário escolha comparar a Área

   printf("Você escolheu comparar a área\n");
    resultadoComparacao1 = area1 > area2 ? 1 : 0;
    break;
  
     case 3:// Caso o usuário escolha comparar o PIB

    printf("Você escolheu comparar o PIB\n");
    resultadoComparacao1 = pib1 > pib2 ? 1 : 0;
    break;

      case 4:// Caso o usuário escolha comparar o número de pontos turísticos

     printf("Você escolheu comparar o número de pontos turísticos\n");
    resultadoComparacao1 = numeroPontosTuristicos1 > numeroPontosTuristicos2 ? 1 : 0;
    break;

      case 5:// Caso o usuário escolha comparar a densidade demográfica

     printf("Você escolheu comparar a densidade demográfica\n");
    resultadoComparacao1 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
    break; 
        
    default:// Caso o usuário digite uma opção inválida

    printf("Opção inválida!\n");
        break;
        
    }

     printf("\nDigite o número correspondente ao segundo atributo que deseja comparar: 1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    scanf("%d", &segundaEscolhaUsuario); // Lê a escolha do usuário para o atributo de comparação


    if (primeiraEscolhaUsuario == segundaEscolhaUsuario)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (segundaEscolhaUsuario)
        {
         case 1:// Caso o usuário escolha comparar a População

    printf("Você escolheu comparar a população\n");
    resultadoComparacao2 = populacao1 > populacao2 ? 1 : 0;
    break;

  case 2:// Caso o usuário escolha comparar a Área

   printf("Você escolheu comparar a área\n");
    resultadoComparacao2 = area1 > area2 ? 1 : 0;
    break;
  
     case 3:// Caso o usuário escolha comparar o PIB

    printf("Você escolheu comparar o PIB\n");
    resultadoComparacao2 = pib1 > pib2 ? 1 : 0;
    break;

      case 4:// Caso o usuário escolha comparar o número de pontos turísticos

     printf("Você escolheu comparar o número de pontos turísticos\n");
    resultadoComparacao2 = numeroPontosTuristicos1 > numeroPontosTuristicos2 ? 1 : 0;
    break;

      case 5:// Caso o usuário escolha comparar a densidade demográfica

     printf("Você escolheu comparar a densidade demográfica\n");
    resultadoComparacao2 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
    break; 
        
    default:// Caso o usuário digite uma opção inválida

    printf("Opção inválida!\n");
        break;
        }

    if (resultadoComparacao1 == resultadoComparacao2)
    {
        printf("\no %s ganhou!\n", nomePais1);
    }
    else if (resultadoComparacao1 != resultadoComparacao2)
    {
        printf("\nEmpatou!\n");
    } else {
        printf("\nO %s ganhou\n", nomePais2);
    }    

    }    
    
    return 0;  // Finaliza o programa
}

