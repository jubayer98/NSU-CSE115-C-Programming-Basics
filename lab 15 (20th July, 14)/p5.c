#include <stdio.h>
#define N 3

int main(void)
{
    int i, j, k, mat1[N][N], mat2[N][N], mat3[N][N], sum=0;

    printf("Enter first 3x3 matrix:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter second 3x3 matrix:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nResult 3x3 matrix:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            for(k=0; k<N; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }

    return 0;
}
