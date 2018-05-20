#include <stdio.h>

void pyr(int);

int main(void)
{
    int height;
    printf("Please enter the number of rows for the pyramid: ");
    scanf("%d", &height);
    pyr(height);

    return 0;
}

void pyr(int height)
{
    int row, i;

    for(row=1; row<=height; row++)
    {
        for(i=1; i<=height-row; i++)
        {
            printf(" ");
        }
        for(i=1; i<=row*2-1; i++)
        {
        printf("*");
        }
    printf("\n");
    }
}
