#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 1000
#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, n, r[MAX_LEN / 2][MAX_LEN / 2];
	printf("Введите размерность матрицы: ");
	scanf("%d", &n);
	while (n < 0 || n>MAX_LEN / 2)
	{
		printf("Размерность матрицы должна быть >0 и <%d: ", MAX_LEN / 2);
		scanf("%d", &n);
	}
	printf("Введите размерность матрицы: ");
	scanf("%d", &m);
	while (m < 0 || n * m>MAX_LEN)
	{
		printf("Размерность матрицы должна быть >0 и <%d: ", MAX_LEN / n);
		scanf("%d", &n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Введите %d элемент %d строки : ", j + 1, i + 1);
			scanf("%d", &r[i][j]);
		}
	}
	int max, min,  maxi, mini;
	float a[MAX_LEN / 2];
	for (int j = 0; j < m; j++)
	{
		max = r[0][j]; 
		maxi = 0;
		min = r[0][j];
		mini = 0;
		for (int i = 0; i < n; i++)
		{
			if (r[i][j] > max)
			{
				max = r[i][j];
				maxi = i;
			}
			if (r[i][j] < min)
			{
				min = r[i][j];
				mini = i;
			}
		}
		int sum = 0;
		if (mini > maxi)
		{
			for (int i = maxi+1; i < mini; i++)
			{
				sum += r[i][j];
			}
		}
		else
		{
			for (int i = mini+1; i < maxi; i++)
			{
				sum += r[i][j];
			}
		}
		if ((abs(maxi - mini) - 1) == 0)
		{
			a[j] = 0;
		}
		else
		{
			a[j] = (float)sum / (abs(maxi - mini) - 1);
		}
	}
	printf("Matrix:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	printf("Result: ");
	for (int i = 0; i < m; i++)
	{
		printf("%f ", a[i]);
	}

	return 0;
}