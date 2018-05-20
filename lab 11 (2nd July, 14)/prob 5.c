#include <stdio.h>

int GCD(int, int);
int LCM(int, int);

int main(void)
{
    int num1, num2, gcd, lcm;
    printf("Enter First Integer: ");
    scanf("%d", &num1);
    printf("Enter Second Integer: ");
    scanf("%d", &num2);

    gcd = GCD(num1, num2);
    lcm = LCM(num1, num2);

    printf("\n\nGCD of %d and %d is :> %d\n", num1, num2, gcd);
    printf("\n\nLCM of %d and %d is :> %d\n", num1, num2, lcm);

    return 0;
}

int GCD(int n1, int n2)
{
    int numerator, denominator, remainder;

    if(n1>n2)
    {
        numerator = n1;
        denominator = n2;
    }
    else
    {
        numerator = n2;
        denominator = n1;
    }

    remainder = n1%n2;

    while(remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator%denominator;
    }

    int result = denominator;
    return result;
}

int LCM(int n1, int n2)
{
    int result = n1*n2/GCD(n1, n2);
    return result;
}
