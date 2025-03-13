#include <stdio.h>
int main() {
    
    char estado;
    char cidade[50];
    char carta[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    


    printf("Digite o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s" , &cidade);
   
    printf("Digite o Código da Carta: \n");
    scanf("%s" , &carta);
    
    printf("Digite a população total: \n");
    scanf("%d", &populacao);

    printf("Digite a Área por km: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("Estado: %c \n - Código da Carta: %s \n ", estado, carta);
    printf("Nome da Cidade: %s \n ", cidade);
    printf("População: %d \n", populacao);
    printf("Área por km: %f \n - PIB: %f \n", area, pib);
    printf("Pontos Turístico: %d \n", turismo);
    

        return 0;

    }

    
    
        
        
 