#include <stdio.h>

int main(){
    
    int populacao;
    float area;
    float PIB;
    float DensidadePopulacional;
    float PIBperCapita;

    
    printf("Entre com o número da população: \n");
    scanf("%f", &populacao);

    printf("Digite o número da área: \n");
    scanf("%f" , &area);

    printf("Digite o número do PIB: \n");
    scanf("%f" , &PIB);

    printf("Digite o número da população: \n");
    scanf("%f" , &populacao);

    DensidadePopulacional = populacao / area;
    PIBperCapita = populacao / PIB;

    printf("O valor da densidade populacional é: %f \n", DensidadePopulacional);
    printf("O valor do PIB per Capita é: %f \n" , PIBperCapita);


                    //Informações usada como exemplo//

    //Estado: A //                            //Estado: B //
    //População: 14 milhões//                 //População: 1 milhão//
    //Área: 567.1 km²//                       //Área: 319.2 km²//
    //PIB: 62 bilhões//                       //PIB: 77 bilhões//
    
    return 0;


}