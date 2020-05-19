#define _CRT_SECURE_NO_WARNINGS 
#define MAX_LEN 100
#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, n[MAX_LEN];
	float x[MAX_LEN], numerator=0,denominator=0;
	printf("Enter the dimension of the arrays: ");
	scanf("%d", &m);
	while (m < 0 || m>MAX_LEN)
	{
		printf("Array dimension should be >0 и <%d: ",MAX_LEN);
		scanf("%d", &m);
	}
	for (int i=0; i<m; i++)
	{
		printf("Enter %d array element n : ",i+1);
		scanf("%d", &n[i]);

		while (n[i] < 0 )
		{
			printf("Natural number: ");
			scanf("%d", &n[i]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("Enter %d array element x : ", i + 1);
		scanf("%f", &x[i]);
	}
	for (int i = 0; i < m; i++)
	{
		numerator += x[i] * n[i];
		denominator += n[i];
	}
	printf("Результат: %f", numerator / denominator);
	return 0;
}
