#include <stdio.h>

int main(void)
{
    int i, j, a[3][3];

    printf("Please enter the 3x3 matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe resultant matrix:\n");
    for(i=0; i<3; i++)
    {
        a[i][1] = 4*a[i][1];
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
