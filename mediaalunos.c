#include <stdio.h>
int main(){
    int Idade;
    float Altura;
    char Nome[50];
    int Matricula;

    printf("Digite sua Idade: \n");
    scanf("%d", &Idade);

    printf("Digite sua Altura: \n");
    scanf("%f", &Altura);

    printf("Digite seu Nome: \n");
    scanf("%s", &Nome);

    printf("Digite sua Matrícula: \n");
    scanf("%d", &Matricula);

    printf("Nome do Aluno:  %s - Idade do Aluno: %d \n", Nome, Idade);
    printf("Matrícula: %d - Altura: %f", Matricula, Altura);

    return 0;


}
