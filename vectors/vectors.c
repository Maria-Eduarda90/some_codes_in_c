
#include<stdio.h>

int main(void){
    int v[5], i;

    for(i=0; i<5; i++){
        printf("%do. numero? ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\nOrdem inversa: ");

    for(i=4; i>=0; i--){
        printf("%d", v[i]);
    }

    return 0;
}
