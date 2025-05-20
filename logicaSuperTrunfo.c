#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    
    char nomePais1[50], nomePais2[50];  // Nome do país, até 49 caracteres
    unsigned long int populacao1, populacao2;  // População das cidades
    float area1, area2;  // Área das cidades
    float pib1, pib2;  // Produto Interno Bruto das cidades
    int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos
    int escolhaUsuario;

    // ---------- Entrada de dados da primeira carta ----------
    printf("Primeira carta.\n\n");

    printf("Digite o nome do país: ");
    fgets(nomePais1, 50, stdin);  // Lê o nome completo do país

    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Lê a população (unsigned long int)

    printf("Digite a área: ");
    scanf("%f", &area1);  // Lê a área da cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib1);  // Lê o PIB da cidade

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);  // Lê número de pontos turísticos

    // ---------- Cálculos da primeira carta ----------
    float densidadePopulacional1 = (float)populacao1 / area1;  // Densidade populacional
    float pibPerCapita1 = pib1 / populacao1;  // PIB per capita (PIB dividido pela população)
    float calcularInversoDensidade1 = 1.0 / densidadePopulacional1;  // Inverso da densidade
    float superPoder1 = (float)populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 + calcularInversoDensidade1;  // Super Poder total
    
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
    
    // ---------- Cálculos da segunda carta ----------
    float densidadePopulacional2 = (float)populacao2 / area2;  // Densidade populacional
    float pibPerCapita2 = pib2 / populacao2;  // PIB per capita
    float calcularInversoDensidade2 = 1.0 / densidadePopulacional2;  // Inverso da densidade
    float superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + calcularInversoDensidade2;  // Super Poder total
    
    // ---------- Comparações entre as duas cartas ----------
    printf("\n\nComparação de cartas\n\n");

    printf("Digite o número correspondente ao atributo que deseja comparar: 1.População - 2.Área - 3.PIB - 4.Número de pontos turísticos - 5.Densidade demográfica : ");
    scanf("%d", &escolhaUsuario);

    switch (escolhaUsuario)
    {
    case 1:
        printf("O atributo escolhido foi a população\n");
        break;

    case 2:
        printf("O atributo escolhido foi a área\n");
        break;
    
    case 3:
        printf("O atributo escolhido foi o PIB\n");
        break;

    case 4:
        printf("O atributo escolhido foi o número de pontos turíticos\n");
        break;

    case 5:
        printf("O atributo escolhido foi a Densidade demográfica\n");
        break;    
        
    default:

    printf("Opção inválida!\n");
        break;
    }
    
    // Verifica qual cidade tem a maior população
    if (populacao1 > populacao2){
        printf("A cidade 1 tem a maior população!\n");
    } else{
        printf("A cidade 2 tem a maior população!\n");
    }
    
    // Verifica qual cidade tem a maior área territorial
    if (area1 > area2){
        printf("A cidade 1 tem a maior área!\n");
    }
    else
    {
        printf("A cidade 2 tem a maior área!\n");
    }
    

    // Verifica qual cidade tem o maior PIB total
    if (pib1 > pib2){
        printf("A cidade 1 tem o maior PIB!\n");
    }
    else
    {
        printf("A cidade 2 tem o maior PIB!\n");
    }

    
    // Verifica qual cidade possui mais pontos turísticos
    if (numeroPontosTuristicos1 > numeroPontosTuristicos2){
        printf("A cidade 1 tem o maior número de pontos turísticos!\n");
    }
    else
    {
        printf("A cidade 2 tem o maior número de pontos turísticos!\n");
    }
    

    // Verifica qual cidade tem a menor densidade populacional
    if (densidadePopulacional1 < densidadePopulacional2){
        printf("A cidade 1 tem a menor densidade populacional!\n");
    }
    else
    {
        printf("A cidade 2 tem a menor densidade populacional!\n");
    }
    

    // Verifica qual cidade tem o maior PIB per capita 
    if (pibPerCapita1 > pibPerCapita2){
        printf("A cidade 1 tem o maior PIB per capita!\n");
    }
    else
    {
        printf("O país 2 tem o maior PIB per capita!\n");
    }
    

    // Define a cidade vencedora com base no "super poder" 
    float cidadeVencedora = superPoder1 > superPoder2;


    // Verifica qual cidade venceu com base no valor de superPoder e imprime seu nome
    if ( cidadeVencedora ){
        printf("O país vencedor é %s\n", nomePais1);
    }
    else
    {
        printf("O país vencedor é %s\n", nomePais2);
    }
    
    return 0;  // Finaliza o programa
}
