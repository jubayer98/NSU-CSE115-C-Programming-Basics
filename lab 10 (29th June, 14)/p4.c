#include<stdio.h>

void pic(int);

int main (void)
{
    int r;
    printf("Enter the number of Rows for Your Pyramid=> ");
    scanf("%d", &r);

    pic(r);

    return 0;
}

void pic(int row)
{
    int i, j;

    for(i=1; i<=row; i++)
        {
        for(j=1; j<=row-i; j++)
            {
            printf(" ");
            }
        for(j=1; j<=(row-(row-i)); j++)
            {
            printf("%d", i);
            }
        printf("\n");
        }
}
