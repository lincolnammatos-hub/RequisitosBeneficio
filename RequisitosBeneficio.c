#include <stdio.h>

int main() {

    int idade, dependentes;
    float renda;

    printf("Qual sua idade: \n");
    scanf("%d", &idade);

    printf("Quantos dependentes: \n");
    scanf("%d", &dependentes);

    printf("Qual sua renda: \n");
    scanf("%f", &renda);

    if(idade >= 18 && idade <= 60){
        if(renda < 3000){
            if(dependentes > 2){
                printf("Voce atende todos os criterios!\n");
            } else {
                printf("Voce nao atende os requisitos!\n");
            }
        } else {
            printf("Voce nao atende os requisitos!\n");
        }
    } else {
        printf("Voce nao atende os requisitos!\n");
    }

    return 0;
}
