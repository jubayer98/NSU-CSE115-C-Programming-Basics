#include <stdio.h>

void pattern(int);

int main(void)
{
    int num;
    printf("Please enter the value of N: ");
    scanf("%d", &num);
    pattern(num);

    return 0;
}

void pattern(int num)
{
    int i, j;
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
