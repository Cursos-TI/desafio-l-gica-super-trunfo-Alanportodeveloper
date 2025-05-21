#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    
    char nomePais1[50], nomePais2[50];  // Nome do país, até 49 caracteres
    unsigned long int populacao1, populacao2;  // População dos países
    float area1, area2;  // Área dos países
    float pib1, pib2;  // Produto Interno Bruto dos países
    int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos
    int escolhaUsuario; //Variável para armazenar a escolha do usuário

    // ---------- Entrada de dados da primeira carta ----------
    printf("Primeira carta.\n\n");

    printf("Digite o nome do país: ");
    fgets(nomePais1, 50, stdin);  // Lê o nome completo do país
    nomePais1[strcspn(nomePais1, "\n")] = '\0'; //Revome a quebra de linha que o fgets armazena no final da string

    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Lê a população 

    printf("Digite a área: ");
    scanf("%f", &area1);  // Lê a área do país

    printf("Digite o PIB: ");
    scanf("%f", &pib1);  // Lê o PIB do país

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);  // Lê número de pontos turísticos

    // ---------- Cálculo da primeira carta ----------
    float densidadeDemografica1 = (float)populacao1 / area1;  // Densidade demográfica

    
    // ---------- Entrada de dados da segunda carta ----------
    printf("\n\nSegunda carta.\n\n");
    
    getchar();  // Limpa o buffer antes de usar fgets novamente

    printf("Digite o nome do país: ");
    fgets(nomePais2, 50, stdin);  // Lê o nome completo do pais
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Lê a população
    
    printf("Digite a área: ");
    scanf("%f", &area2);  // Lê a área
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);  // Lê o PIB
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);  // Lê o número de pontos turísticos
    
    // ---------- Cálculo da segunda carta ----------
    float densidadeDemografica2 = (float)populacao2 / area2;  // Densidade populacional
    
    // ---------- Comparações entre as duas cartas ----------
    printf("\n\nComparação de cartas\n\n");

    printf("Digite o número correspondente ao atributo que deseja comparar: 1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    scanf("%d", &escolhaUsuario); // Lê a escolha do usuário para o atributo de comparação

    switch (escolhaUsuario)// Início da estrutura de decisão para comparar os atributos
    {
    case 1:// Caso o usuário escolha comparar a População

    printf("\nNome dos países: %s e %s", nomePais1 , nomePais2);  // Imprime os nomes dos países
    printf("O atributo escolhido foi a: População.\n");  // Indica o atributo escolhido
    printf("População da carta 1: %lu - População da carta 2: %lu\n", populacao1, populacao2);  // Mostra as populações

    if (populacao1 > populacao2) {
        printf("A carta 1 venceu!\n");

    } else if (populacao1 < populacao2) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Houve empate!\n");
    }    
        break;

  case 2:// Caso o usuário escolha comparar a Área

    printf("\nNome dos países: %s e %s", nomePais1 , nomePais2);
    printf("O atributo escolhido foi a: Área.\n");
    printf("Área da carta 1: %.2f - Área da carta 2: %.2f\n", area1, area2);

    if (area1 > area2) {
        printf("A carta 1 venceu!\n");

    } else if (area1 < area2) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Houve empate!\n");
    }    
        break;
    
     case 3:// Caso o usuário escolha comparar o PIB

    printf("\nNome dos países %s e %s", nomePais1 , nomePais2);
    printf("O atributo escolhido foi o: PIB.\n");
    printf("PIB da carta 1: %.2f - PIB da carta 2: %.2f\n", pib1, pib2);

    if (pib1 > pib2) {
        printf("A carta 1 venceu!\n");

    } else if (pib1 < pib2) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Houve empate!\n");
    }    
        break;

      case 4:// Caso o usuário escolha comparar o número de pontos turísticos

    printf("\nNome dos países %s e %s", nomePais1 , nomePais2);
    printf("O atributo escolhido foi o: Número de pontos turíticos.\n");
    printf("Número de pontos turíticos da carta 1: %d - Número de pontos turísticos da carta 2: %d\n", numeroPontosTuristicos1, numeroPontosTuristicos2);

    if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
        printf("A carta 1 venceu!\n");

    } else if (numeroPontosTuristicos1 < numeroPontosTuristicos2) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Houve empate!\n");
    }    
        break;

      case 5:// Caso o usuário escolha comparar a densidade demográfica

    printf("\nNome dos países %s e %s", nomePais1 , nomePais2);
    printf("O atributo escolhido foi a: Densidade demográfica.\n");
    printf("Densidade demográfica da carta 1: %.2f - Densidade demográfica da carta 2: %.2f\n", densidadeDemografica1, densidadeDemografica2);

    // Aqui, o menor valor de densidade vence
    if (densidadeDemografica1 < densidadeDemografica2) {
        printf("A carta 1 venceu!\n");

    } else if (densidadeDemografica1 > densidadeDemografica2) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Houve empate!\n");
    }    
        break;    
        
    default:// Caso o usuário digite uma opção inválida

    printf("Opção inválida!\n");
        break;
        
    }
    
    return 0;  // Finaliza o programa
}

