#include <stdio.h>
#define r 5
#define c 3

int main(void)
{
    int i, j, mat[r][c], temp, max=mat[0][2];

    printf("Intput:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nOutput:\n");

    for(i=0; i<r; i++)
    {
        mat[i][1] = mat[i][1]*80;
        mat[i][2] = mat[i][0]+mat[i][1];
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
    {
        if(mat[i][2] > max)
        {
            max = mat[0][2];
            temp = i;
        }
        else
        {
            temp = 0;
        }
    }
    printf("\nThe highest sale took place on %dth day of the week.\n", temp+1);

    return 0;
}
