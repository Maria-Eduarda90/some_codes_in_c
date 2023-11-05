#include<stdio.h>

int main(void){
    int x;
    int *ptr;

    x = 5;

    ptr = &x;

    printf("\nO valor da variavel x e: %d\n", *ptr);

    *ptr = 10;

    printf("\nO novo valor da variavel x e: %d\n", *ptr);

    return 0;
}
