#include <stdio.h>
#define N 3

int main(void)
{
    int mat[N][N], i, j, sum1=0, sum2=0, sum3=0;

    printf("Please enter 3x3 matrix here: \n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<N; i++)
    {
        sum1 = sum1 + mat[i][0];
        sum2 = sum2 + mat[i][1];
        sum3 = sum3 + mat[i][2];
    }

    printf("The total marks of the 1st student = %d\n", sum1);
    printf("The total marks of the 1st student = %d\n", sum2);
    printf("The total marks of the 1st student = %d\n", sum3);

    return 0;
}
