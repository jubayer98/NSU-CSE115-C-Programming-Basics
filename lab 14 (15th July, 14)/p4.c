#include <stdio.h>
#define N 3

int main(void)
{
    int mat[N][N], i, j, sum1=0, sum2=0, sum3=0;

    printf("Please enter a 3x3 matrix:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(j=0; j<N; j++)
    {
        sum1 = sum1 + mat[0][j];
        sum2 = sum2 + mat[1][j];
        sum3 = sum3 + mat[2][j];
    }

    printf("Sum of row 1 = %d\n", sum1);
    printf("Sum of row 2 = %d\n", sum2);
    printf("Sum of row 3 = %d\n", sum3);

    return 0;
}
