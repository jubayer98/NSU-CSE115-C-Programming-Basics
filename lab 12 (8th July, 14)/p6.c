#include <stdio.h>

int factorial(int fact);

int main(void)
{
    int number;
    printf("Please Enter an Integer Number:\n");
    scanf("%d", &number);

    int result = factorial(number);

    printf("Your Result is: %d", result);

    return 0;
}

int factorial(int fact)
{
    if(fact <= 1)
        return 1;
    else
        return (fact*factorial(fact-1));
}
