#include <stdio.h>
#define N 3

int main(void)
{
    int i, j, mat[N][N], sum=0, choice;

    printf("Please enter 3x3 matrix here:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Which color balloons you want to count:\n1. Pink\n2. Yellow\n3. Blue\n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        for(i=0; i<N; i++)
        {
            sum = sum + mat[i][0];
        }
        printf("The total number of pink balloons = %d", sum);
    }

    if(choice == 2)
    {
        for(i=0; i<N; i++)
        {
            sum = sum + mat[i][1];
        }
        printf("The total number of yellow balloons = %d", sum);
    }

    if(choice == 3)
    {
        for(i=0; i<N; i++)
        {
            sum = sum + mat[i][2];
        }
        printf("The total number of blue balloons = %d", sum);
    }

    return 0;
}
