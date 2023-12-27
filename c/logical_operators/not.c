
#include<stdio.h>

int main(void){
    int VALOR;

    printf("\nEntre com um valor inteiro positivo: ");
    scanf("%d", &VALOR);

    if(!(VALOR >=0 )){
        printf("valor invalido\n");
    } else {
        printf("valor valido, voce digitou %d\n", VALOR);
    }

    return 0;
}
