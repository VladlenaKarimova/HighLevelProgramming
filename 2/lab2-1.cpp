#define _CRT_SECURE_NO_WARNINGS 
#define MAX_LEN 100
#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, n[MAX_LEN];
	float x[MAX_LEN], chislitel=0,znamenatel=0;
	printf("Введите размерность массивов: ");
	scanf("%d", &m);
	while (m < 0 || m>MAX_LEN)
	{
		printf("Размерность массивов должна быть >0 и <%d: ",MAX_LEN);
		scanf("%d", &m);
	}
	for (int i=0; i<m; i++)
	{
		printf("Введите %d элемент массива n : ",i+1);
		scanf("%d", &n[i]);

		while (n[i] < 0 )
		{
			printf("Натуральное число: ");
			scanf("%d", &n[i]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("Введите %d элемент массива x : ", i + 1);
		scanf("%f", &x[i]);
	}
	for (int i = 0; i < m; i++)
	{
		chislitel += x[i] * n[i];
		znamenatel += n[i];
	}
	printf("Результат: %f", chislitel / znamenatel);
	return 0;
}