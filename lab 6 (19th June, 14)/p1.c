#include <stdio.h>

void odd_even(int);

int main(void)
{
    int a;
    printf("Please enter an integer: ");
    scanf("%d", &a);
    odd_even(a);

    return 0;

}

void odd_even(int a)
{
    if(a%2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}
