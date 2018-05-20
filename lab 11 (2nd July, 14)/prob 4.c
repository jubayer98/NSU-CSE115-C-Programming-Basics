#include <stdio.h>

void fibonacci(int);

int main(void)
{
    int number;
    printf("Please Enter How Many Terms of the FIBONACCI Series you want the output?\n::> ");
    scanf("%d", &number);

    fibonacci(number);

    return 0;
}

void fibonacci(int n)
{
    int first=0, second=1, third, i;

    for(i=0; i<n; i++)
    {
        if(i <= 1)
        {
        third = i;
        }
        else
        {
            third = first+second;
            first = second;
            second = third;
        }
    printf("%d ", third);
    }
}
