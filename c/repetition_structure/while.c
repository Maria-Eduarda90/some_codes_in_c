
#include<stdio.h>

int main(void){
    int A, B, R, I;

    I = 1;

    while(I <=3 ){
        printf("\n\nEntre com um valor para A: "); scanf("%d", &A);
        printf("Entre com um valor para B: "); scanf("%d", &B);

        R = A + B;

        printf("\n0 resultado correspondente de a: %d", R);

        I = I + 1;
    }
    return 0;
}
