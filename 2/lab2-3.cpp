#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 100
#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, n[MAX_LEN];
	printf("Введите размерность массивов: ");
	scanf("%d", &m);
	while (m < 0 || m>MAX_LEN)
	{
		printf("Размерность массивов должна быть >0 и <%d: ", MAX_LEN);
		scanf("%d", &m);
	}
	for (int i = 0; i < m; i++)
	{
		printf("Введите %d элемент массива n : ", i + 1);
		scanf("%d", &n[i]);
	}
	int max,sum=0;
	
	max = n[0];
	for (int i = 1; i < m; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (abs(n[i]) == max)
		{
			sum += n[i];
			for (int j = i; j < m; j++)
			{
				n[j] = n[j + 1];
			}
			m--;

		}
	}
	if (m % 2 == 0)
	{
		m++;
		for (int i = m; i > m / 2; i--)
		{
			n[i] = n[i - 1];
		}
		n[m / 2] = sum;
	}
	printf("Result: ");
	for (int i = 0; i < m; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}
