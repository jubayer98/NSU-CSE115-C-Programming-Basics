#include <stdio.h>

void pic(int);

int main(void)
{
    int height;
    printf("Please Enter the Number of rows for the Picture: ");
    scanf("%d", &height);

    pic(height);

    return 0;
}

void pic(int height)
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
            if(row%2 != 0)
            {
                printf("0");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}
