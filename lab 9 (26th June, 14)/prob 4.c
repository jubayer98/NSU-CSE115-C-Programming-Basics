#include <stdio.h>

int triple(int);

int main(void)
{
    int num;
    printf("Please Enter a number: ");
    do
    {
    scanf("%d", &num);
    int res = triple(num);
    printf("\nThe triple of the number is %d\n", res);
    }

    while(num != -999);
    return 0;
}

int triple(int x)
{
    return 3*x;
}
