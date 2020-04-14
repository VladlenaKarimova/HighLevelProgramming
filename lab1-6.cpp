#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 1;
	float e, sum=0, a;
	printf("e=");
	scanf("%f", &e);
	a = 1.0 / (i * (i + 1));
	sum += a;
	i++;
	while (a > e)
	{
		a = 1.0 / (i * (i + 1));
		sum += a;
		i++;
	}
		
	printf("sum=%f", sum);
	return 0;

}