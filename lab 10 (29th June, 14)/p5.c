#include <stdio.h>

void pyr(void);
void sqr(void);

int main(void)
{
    pyr();
    sqr();
    return 0;
}

void pyr(void)
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void sqr(void)
{
    int i, j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=2; j++)
        {
            printf(" ");
        }
        for(j=1; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

