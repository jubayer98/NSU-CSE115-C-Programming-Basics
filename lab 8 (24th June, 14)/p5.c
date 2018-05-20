#include <stdio.h>

int summation(void);

int main(void)
{
    int result = summation();
    printf("Your result is %d", result);
    return 0;
}

int summation(void)
{
    int num = 0;
    int sum = 0;

    while(num < 20)
    {
        sum = sum + num;
        printf("Please enter numbers: \n");
        scanf("%d", &num);
    }
    return sum;
}
