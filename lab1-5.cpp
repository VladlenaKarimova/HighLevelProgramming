#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float n, sum=0,sum1;
	printf("n=");
	scanf("%f", &n);
	for (int i = 1; i <= n; i++)
	{
		sum1 = 0;
		for (int a = 1; a <= i; a++)
		{
			sum1 += sin(a);

		}
		sum += 1 / sum1;
		
	}

	printf("sum=%f", sum);
	return 0;
}