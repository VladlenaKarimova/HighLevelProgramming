#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 100
#include <stdio.h>
#include <math.h>

int main(void)
{
    int m, n[MAX_LEN], proverka;
    printf("Введите размерность массивов: ");
    scanf("%d", &m);
    while (m <= 0 || m > MAX_LEN)
    {
        printf("Размерность массивов должна быть >0 и <%d: ", MAX_LEN);
        scanf("%d", &m);
    }
    for (int i = 0; i < m; i++)
    {
        printf("Введите %d элемент массива n : ", i + 1);
        scanf("%d", &n[i]);
        while (n[i] == 0)
        {
            printf("Элемент не должен быть равен нулю. Повторите ввод: ");
            scanf("%d", &n[i]);
        }
    }
    if (n[0] > 0)
    {
        proverka = 1;
    }
    else
    {
        proverka = -1;
    }

    for (int i = 1; i < m; i++)
    {
        if (n[i] > 0 && proverka < 0)
        {
            proverka = 1;
        }
        else if (n[i] < 0 && proverka>0)
        {
            proverka = -1;
        }
        else
        {
            proverka = 0;
            break;
        }
    }
    int min, max;
    min = n[0];
    max = n[0];
    for (int i = 1; i < m; i++)
    {
        if (n[i] < min)
        {
            min = n[i];
        }
        if (n[i] > max)
        {
            max = n[i];
        }
    }
    if (proverka == 1 || proverka == -1)
    {
        for (int i = 0; i < m; i++)
        {
            if (n[i] == max)
            {
                n[i] = min;
            }
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            if (n[i] == min)
            {
                n[i] = max;
            }
        }
    }
    printf("Result: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}
