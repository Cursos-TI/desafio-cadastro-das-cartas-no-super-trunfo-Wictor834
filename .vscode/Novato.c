#include <stdio.h>

int main(){
    
    char pais[20];
    char estado[20];
    char cidade[20];
    int carta;
    float populacao;
    int area;
    float PIB;
    int turistico;

    printf("Digite o nome do pais: \n");
    scanf("%s", &pais);

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da carta: \n");
    scanf("%d", &carta);

    printf("Digite o número da populacao: \n");
    scanf("%f", &populacao);

    printf("Digite a area: \n");
    scanf("%d", &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d" , &turistico);

    printf("O nome do país é: %s \n", pais);
    printf("O nome do estado é: %s\n" , estado);
    printf("O nome da cidade é: %s \n" , cidade);
    printf("O número da carta é: %d \n", carta);
    printf("O número da população é: %1.f mil \n", populacao);
    printf("O tamanho da área em km² é: %d km² \n" , area);
    printf("O número do PIB é: %1.f bilhões \n", PIB);
    printf("O número de pontos turisticos é: %d \n", turistico);


    //Informações usada como exemplo//

    //Pais: Brasil//
    //Estado: Pernambuco//
    //Cidade: Caruaru//
    //Carta: 2739//
    //População: 378 mil//
    //Área: 923 km²//
    //PIB: 8 bilhões//
    //Números de pontos turísticos: 7//

    return 0;


}