#include <stdio.h>

int main(){
    
    char estado [15];
    char cidade[20];
    char carta[10];
    int populacao;
    float area;
    float PIB;
    int turistico;

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da carta: \n");
    scanf("%s", &carta);

    printf("Digite o número da populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d" , &turistico);

    printf("O nome do estado é: %s \n" , estado);
    printf("O nome da cidade é: %s \n" , cidade);
    printf("O número da carta é: %s \n", carta);
    printf("O número da população é: %d mil \n", populacao);
    printf("O tamanho da área em km² é: %f km² \n" , area);
    printf("O número do PIB é: %f bilhões \n", PIB);
    printf("O número de pontos turisticos é: %d \n", turistico);


    //Informações usada como exemplo//

    //Estado: Pernambuco
    //Cidade: Caruaru
    //Carta: A01
    //População: 378 mil
    //Área: 923.1 km²
    //PIB: 8.1 bilhões
    //Números de pontos turísticos: 7

    return 0;


}