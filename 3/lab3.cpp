#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main()
{
	FILE* f;
	int size=2,i=0, sum=0;
	int* n = (int*)malloc(size * sizeof(int));
	f = fopen("input.txt", "r");
	if (f == NULL)
	{
		printf("Oshibka otktya fayla\n");
		return 1;
	}
	while (fscanf(f, "%d", &n[i])!=EOF)
	{
		size *= 2;
		n = (int*)realloc(n, size * sizeof(int));
		i++;
	}
	fclose(f);
	for (int j = 0; j < i; j++)
	{
		sum += n[j];
	}
	f = fopen("output.txt", "w");
	if (f == NULL)
	{
		printf("Oshibka otktya fayla\n");
		return 2;
	}
	fprintf(f, "%d", sum / i);
	fclose(f);
	return 0;
}