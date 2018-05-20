#include <stdio.h>
#define r 5
#define c 3

int main(void)
{
    int i, j;
    float mat[r][c];

    printf("Input:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }

    printf("\nOutput:\n");

    for(i=0; i<r; i++)
    {
        mat[i][2] = (mat[i][0]+mat[i][1])/2;
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
