
#include<stdio.h>

int main(void){
    int a;
    int b;
    int c;

    int *ptr;

    a = 20;
    b = 2;
    c = 3;

    ptr = &a;

    printf("Valor de ptr: %p, conteudo de ptr: %d\n", ptr, *ptr);

    printf(("B: %d, C: %d"), b , c);

    return 0;
}
