#include <stdio.h>
#define N 3

int main(void)
{
    int i, j, mat1[N][N], mat2[N][N];

    printf("First Input:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nSecond Input:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nOutput:\n");

    for(i=0; i<N; i++)
    {
        mat1[i][1] = 2 * mat1[i][1];
        mat2[1][i] = 2 * mat2[1][i];
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ", mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
