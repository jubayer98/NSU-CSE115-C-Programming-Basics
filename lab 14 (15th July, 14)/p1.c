#include <stdio.h>
#define N 4

int main(void)
{
    float mat[N][N];
    int i, j;

    printf("Please Enter a 4x4 matrix:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }

    printf("\nThe output matrix is:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%.1f ", mat[i][j]/2);
        }
        printf("\n");
    }

    return 0;
}
