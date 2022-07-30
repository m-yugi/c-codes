#include <stdio.h>
int main()
{
    int a, mid, i, j;
    scanf("%d", &a);
    mid = ((2 * a) - 1) / 2;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < (2 * a) - 1; j++)
        {
            if (a % 2 != 0)
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0 && (j >= mid - i && j <= mid + i))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                else
                {
                    if (j % 2 != 0 && (j >= mid - i && j <= mid + i))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("-");
                    }
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    if (j % 2 != 0 && (j >= mid - i && j <= mid + i))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                else
                {
                    if (j % 2 == 0 && (j >= mid - i && j <= mid + i))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("-");
                    }
                }
            }
        }
        printf("\n");
    }
}