
#include<stdlib.h>
#include<stdio.h>

int main(void){
    int *ptr_a;
    ptr_a = malloc(sizeof(int));

    if(ptr_a == NULL){
        printf("Memoria insuficiente!\n");
        exit(1);
    }

    printf("\nEndereco de ptr_a: %p\n", ptr_a);

    *ptr_a = 90;

    printf("\Conteudo de ptr_a: %d\n", *ptr_a);

    free(ptr_a);
}
