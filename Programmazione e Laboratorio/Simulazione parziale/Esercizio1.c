#include <stdio.h>

float MCD(int a, int b)
{
    while (!(a == b))
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}

int main()
{
    int m;
    printf("Scrivi M: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%.3f ", 1 / MCD(i, j));
        }
        printf("\n");
    }
    return 0;
}