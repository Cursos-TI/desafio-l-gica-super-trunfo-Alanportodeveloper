#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    
    char nomePais1[50], nomePais2[50];  // Nome do país, até 49 caracteres
    unsigned long int populacao1, populacao2;  // População dos países
    float area1, area2;  // Área dos países
    float pib1, pib2;  // Produto Interno Bruto dos países
    int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos

    // Variáveis de escolhas e resultados
    int primeiraEscolhaUsuario, segundaEscolhaUsuario; //Variável para armazenar a primeira e segunda escolha do usuário
    int resultadoComparacao1, resultadoComparacao2; // Resultado da comparação entre os atributos
    float valor1Atributo1, valor1Atributo2, valor2Atributo1, valor2Atributo2; // Valores dos atributos escolhidos para os dois países
    float densidadeDemografica1, densidadeDemografica2; // Densidade demográfica calculada
    

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
    densidadeDemografica1 = (float)populacao1 / area1;  // Densidade demográfica

     getchar(); // Limpa buffer do teclado após uso de scanf

    
    // ---------- Entrada de dados da segunda carta ----------
    printf("\n\n*** Segunda carta.***\n\n");

    printf("Digite o nome do país: ");
    fgets(nomePais2, 50, stdin);  // Lê o nome completo do pais
    nomePais2[strcspn(nomePais2, "\n")] = '\0'; //Revome a quebra de linha que o fgets armazena no final da string
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Lê a população
    
    printf("Digite a área: (Km²)");
    scanf("%f", &area2);  // Lê a área
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);  // Lê o PIB
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);  // Lê o número de pontos turísticos
    
    // ---------- Cálculo da segunda carta ----------
    densidadeDemografica2 = (float)populacao2 / area2;  // Densidade populacional
    
    
    // ---------- Menu para o primeiro atributo ----------
    

    printf("\nDigite o número correspondente ao primeiro atributo que deseja comparar:\n1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    scanf("%d", &primeiraEscolhaUsuario); // Lê a escolha do usuário para o primeiro atributo

    switch (primeiraEscolhaUsuario)// Estrutura de decisão para comparação do primeiro atributo
    {
    case 1:// Caso o usuário escolha comparar a População

    printf("Você escolheu comparar a população\n\n");
    resultadoComparacao1 = populacao1 > populacao2 ? 1 : 0; // Define o resultado da comparação com base em quem tem maior população
    
    // Armazena os valores de população para os dois países para exibição posterior
    valor1Atributo1 = (float)populacao1;
    valor2Atributo1 = (float)populacao2;
    break;

  case 2:// Caso o usuário escolha comparar a Área

   printf("Você escolheu comparar a área\n\n");
    resultadoComparacao1 = area1 > area2 ? 1 : 0;
    valor1Atributo1 = (float)area1;
    valor2Atributo1 = (float) area2;
    break;
  
     case 3:// Caso o usuário escolha comparar o PIB

    printf("Você escolheu comparar o PIB\n\n");
    resultadoComparacao1 = pib1 > pib2 ? 1 : 0;
    valor1Atributo1 = (float) pib1;
    valor2Atributo1 = (float) pib2;
    break;

      case 4:// Caso o usuário escolha comparar o número de pontos turísticos

    printf("Você escolheu comparar o número de pontos turísticos\n\n");
    resultadoComparacao1 = numeroPontosTuristicos1 > numeroPontosTuristicos2 ? 1 : 0;
    valor1Atributo1 = numeroPontosTuristicos1;
    valor2Atributo1 = numeroPontosTuristicos2;
    break;

      case 5:// Caso o usuário escolha comparar a densidade demográfica

    printf("Você escolheu comparar a densidade demográfica\n\n");
    resultadoComparacao1 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
    valor1Atributo1 = densidadeDemografica1;
    valor2Atributo1 = densidadeDemografica2;
    break; 
        
    default:// Caso o usuário digite uma opção inválida

    printf("Opção inválida!\n");
    return 1; // Encerra o programa se a opção for inválida
        
    }


    // Menu dinâmico para o segundo atributo

    printf("\nDigite o número correspondente ao segundo atributo que deseja comparar: \n"); // Exibe apenas as opções que não foram escolhidas na primeira comparação
   
   switch (primeiraEscolhaUsuario)
   {
   case 1:
    printf("2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    break;

    case 2:
    printf("1.População - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    break;

    case 3:
    printf("1.População - 2.Área - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    break;

    case 4:
    printf("1.População - 2.Área - 3.PIB- 5.Densidade demográfica : ");
    break;

    case 5:
    printf("1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos : ");
    break;
   }
     scanf("%d", &segundaEscolhaUsuario); // Lê a escolha do usuário para o segundo atributo

    // Verifica se o usuário escolheu o mesmo atributo duas vezes
    if (primeiraEscolhaUsuario == segundaEscolhaUsuario)
    {
        printf("\nVocê escolheu o mesmo atributo!\n");
        return 1;
    }
    else
    {
        // Estrutura de decisão para comparação do segundo atributo
        switch (segundaEscolhaUsuario)
        {
         case 1:// Caso o usuário escolha comparar a População

    printf("Você escolheu comparar a população\n");
    resultadoComparacao2 = populacao1 > populacao2 ? 1 : 0;
    valor1Atributo2 = (float)populacao1;
    valor2Atributo2 = (float)populacao2;
    break;

  case 2:// Caso o usuário escolha comparar a Área

    printf("Você escolheu comparar a área\n");
    resultadoComparacao2 = area1 > area2 ? 1 : 0;
    valor1Atributo2 = area1;
    valor2Atributo2 = area2;
    break;
  
     case 3:// Caso o usuário escolha comparar o PIB

    printf("Você escolheu comparar o PIB\n");
    resultadoComparacao2 = pib1 > pib2 ? 1 : 0;
    valor1Atributo2 = pib1;
    valor2Atributo2 = pib2;
    break;

      case 4:// Caso o usuário escolha comparar o número de pontos turísticos

    printf("Você escolheu comparar o número de pontos turísticos\n");
    resultadoComparacao2 = numeroPontosTuristicos1 > numeroPontosTuristicos2 ? 1 : 0;
    valor1Atributo2 = numeroPontosTuristicos1;
    valor2Atributo2 = numeroPontosTuristicos2;
    break;

      case 5:// Caso o usuário escolha comparar a densidade demográfica

    printf("Você escolheu comparar a densidade demográfica\n");
    resultadoComparacao2 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
    valor1Atributo2 = densidadeDemografica1;
    valor2Atributo2 = densidadeDemografica2;
    break; 
        
    default:// Caso o usuário digite uma opção inválida

    printf("\nOpção inválida!\n");
    return 1;

        }


    
    // ---------- Cálculo das somas considerando inversão para densidade ----------
    // Se a densidade demográfica for escolhida, invertemos o valor para que menor seja melhor

    float soma1 = ((primeiraEscolhaUsuario == 5)? -valor1Atributo1 : valor1Atributo1) + ((segundaEscolhaUsuario == 5)? -valor1Atributo2 : valor1Atributo2);
    float soma2 = ((primeiraEscolhaUsuario == 5)? -valor2Atributo1 : valor2Atributo1) + ((segundaEscolhaUsuario == 5)? -valor2Atributo2 : valor2Atributo2);

    // Exibir os resultados

    printf("\n*** Comparação final ***\n\n");
    printf("País 1: %s\n", nomePais1);
    printf("Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n\n", valor1Atributo1, valor1Atributo2, soma1);
    printf("País 2: %s", nomePais2);
    printf("Atributo 1: %.2f, Atributo 2: %.2f, soma: %.2f\n", valor2Atributo1, valor2Atributo2, soma2);

    // Determina o vencedor com base na maior soma
    if (soma1 > soma2){
        printf("%s ganhou!\n", nomePais1);
    }
    else if (soma2 > soma1){
        printf("%s ganhou!\n", nomePais2);

    } else {

        printf("Empatou!\n"); // Caso as somas sejam iguais

        return 0;
    }

}
    
}