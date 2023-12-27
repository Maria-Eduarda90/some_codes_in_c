
#include<stdio.h>

int main(void){
    FILE *PTRARQ;

    PTRARQ = fopen("file.txt", "a");

    fclose(PTRARQ);

    return 0;
}
