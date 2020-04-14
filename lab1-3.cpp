#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int d, n, x, y, z;
	printf("n=");
	scanf("%d", &n);

	for (d = 100; d < 1000; d++)
	{
		x = d / 100;
		y = (d / 10) % 10;
		z = d % 10;
		if (n == x + y + z)
		{
			printf("%d\n", d);
		}
	}
	return 0;
}