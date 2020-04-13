#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, x, y, z, a1,a2, a3, b1, b2;
	printf("x=");
	scanf("%f", &x);
	printf("y=");
	scanf("%f", &y);
	printf("z=");
	scanf("%f", &z);

	a1 = 1 + y;
	a2 = x + y / (x * x + 4);
	a3 = exp(-x - 2) + 1 / (x * x + 4);
	
	if (a3 != 0)
	{
		a = a1 * a2 / a3;
		printf("a=%f\n", a);
	}
	else
	{
		printf("а Вычислить невозможно\n");
	}

	b1 = 1 + cos(y - 2);
	b2 = pow(x, 4) / 2 + pow(sin(z), 2);
	
	if (b2 != 0)
	{
		b = b1 / b2;
		printf("b=%f");
	}
	else
	{
		printf("b Вычислить невозможно\n");
	}

	return 0;
	
}