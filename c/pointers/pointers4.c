#include <stdio.h>

void rotina(int x, int y , int z);

int main(void)
{
	int a = 10;
	int b = 20;
	rotina(a, a+b, a*b);
	return 0;
}

void rotina(int x, int y, int z)
{
	printf("%d %d %d", x, y, z);
}
