#include <stdio.h>
#define m 3
#define n 2

int main(void)
{
    int mat[m][n], i, j;

    printf("Please enter 3x2 matrix here:\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nOutput is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<1; j++)
        {
            printf("%d\n", mat[i][0]-mat[i][1]);
        }
    }

    return 0;
}
