#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y, z, min;
	printf("x=");
	scanf("%f", &x);
	printf("y=");
	scanf("%f", &y);
	printf("z=");
	scanf("%f", &z);

	if (x != y && x != z && y != z && x + y + z < 1)
	{
		if (x < z && x < y)
		{
			x = (z + y) / 2;
		}
		else
		{
			if (y < x && y < z)
			{
				y = (x + z) / 2;
			}
			else
			{
				z = (x + y) / 2;
			}
		}
	}
	else
	{
		if (x < y)
		{
			x = (y + z) / 2;
		}
		else
		{
			y = (x + z) / 2;
		}
	}

	printf("x=%f\ny=%f\nz=%f\n", x, y, z);
	

	return 0;

}