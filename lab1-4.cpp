#define _CRT_SECURE_NO_WARNINGS
#define MAXLEN 100
#include <stdio.h>
#include <math.h>

int main(void)
{
	int v[MAXLEN], i, sum=0;
	printf("Введите последовательность чисел: ");

	for (i = 0; i < MAXLEN; i++)
	{
		scanf("%d", &v[i]);
		if (v[i] == 0)
		{
			break;
		}
	}
	for (i = 0; v[i] != 0 && i < MAXLEN; i++)
	{
		if (v[i] % 10 == 0 || (v[i] % 10) % 2 != 0)
		{
			sum+=v[i];
		}
	}
	printf("Сумма чисел равняется=%d ", sum);
	return 0;
}