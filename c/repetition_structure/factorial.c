
#include<stdio.h>

int main(void){
    int contador, n;

    long fatorial = 1;

    contador = 1;

    printf("\nPrograma Fatorial\n");
    printf("\nFatorial de que numero: "); scanf("%d", &n);

    while(contador <= n){
        fatorial *= contador;
        contador++;
    }

    printf("\nFatorial de %d equivale a %d\n\n", n, fatorial);

    return 0;
}
