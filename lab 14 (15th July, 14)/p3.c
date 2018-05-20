#include <stdio.h>
#define N 3

int main(void)
{
    int i, j, mat1[N][N], mat2[N][N], sum[N][N];

    printf("Please enter first 3x3 matrix:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nPlease enter second 3x3 matrix:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nThe output matrix is:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            sum[i][j] = mat1[i][j]+mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
