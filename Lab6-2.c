#include <stdio.h>

int main()
{
    double matrix_a[3][3], matrix_b[3][3], result[3][3];
    int i, j, k;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%lf", &matrix_a[i][j]);
        }
    }
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%lf", &matrix_b[i][j]);
        }
    }
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            for (k = 0; k < 3; ++k)
            {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    printf("A x B\n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}