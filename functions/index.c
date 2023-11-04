
#include<stdio.h>

void contagemRegressiva(int n){
    int i;

    for(i=n; i>=0; i--){
        printf("%d\n", i);
    }
}

int main(void){
    int n;

    printf("Numero? ");
    scanf("%d", &n);
    contagemRegressiva(n);

    return 0;
}
