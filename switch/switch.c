#include<stdio.h>
#include<ctype.h>

int main(void){
    char s;

    printf("Escolha uma inicial (M) ou (J): ");

    scanf("%c", &s);

    switch(toupper(s)){
        case 'M':
            printf("Maria\n");
            break;
        case 'J':
            printf("Joao\n");
            break;

        default:
            printf("invalido\n");
            break;
    }

    return 0;
}
