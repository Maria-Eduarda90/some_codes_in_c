
#include<stdio.h>

int main(void){
    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    float f;
    double d;

    printf("char %d\n", sizeof(c));
    printf("unsigned char %d\n", sizeof(uc));
    printf("char %d\n", sizeof(i));
    printf("unsigned char %d\n", sizeof(ui));
    printf("float %d\n", sizeof(f));
    printf("double %d\n", sizeof(d));
}
