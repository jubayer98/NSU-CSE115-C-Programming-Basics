#include <stdio.h>

void table(void);

int main(void)
{
    table();

    return 0;
}

void table(void)
{
    int i,j;

    for(i=1; i<=5; i++)
        {
        for(j=1; j<=10; j++)
        {
            printf("%d\t", i*j);
        }

    printf("\n");
        }
}
