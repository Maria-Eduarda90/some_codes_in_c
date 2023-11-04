
#include<stdio.h>

int main(void){
    FILE *PTRARQ;
    char PALAVRA[20];

    PTRARQ = fopen("file.txt", "r");
    fscanf(PTRARQ, "%s", PALAVRA);

    printf("Palavra = %s", PALAVRA);

    fclose(PTRARQ);

    return 0;
}
