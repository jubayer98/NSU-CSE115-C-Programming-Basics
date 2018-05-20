#include <stdio.h>

int main(void)
{
    int i, j, a[4][4];

    printf("Please enter a 4x4 matrix:\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe output matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", 3*a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
