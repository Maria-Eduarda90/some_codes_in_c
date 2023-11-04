#include<stdio.h>

int main(void){
    int n, c, r;

    do {
        printf("Numero entre 1 e 10: ");
        scanf("%d", &n);
    } while(n<1 || n>10);

    printf("\nTabuada do %d\n\n", n);

    for(c=1; c<=10; c++){
        r = n*c;
        printf("%d x %2d = %3d\n", n, c, r);
    }

    return 0;
}
