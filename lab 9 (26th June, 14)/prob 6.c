#include <stdio.h>

void square_pattern(void);

int main(void)
{
    square_pattern();
    return 0;
}

void square_pattern(void)
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
