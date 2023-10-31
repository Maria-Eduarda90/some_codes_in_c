
#include<stdio.h>
#include<math.h>

int main(void){
    float x1, x2, y1, y2, a, b, c;

    printf("p1? = ");
    scanf("%f %f", &x1, &y1);

    printf("p2? = ");
    scanf("%f %f", &x2, &y2);

    a = x2 - x1;
    b = y2 - y1;

    c = sqrt( pow(a,2) + pow(b,2) );

    printf("Distancia = %.1f\n", c);

    return 0;
}
