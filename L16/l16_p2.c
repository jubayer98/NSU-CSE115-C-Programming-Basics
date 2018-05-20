#include<stdio.h>

int main(void)
{
    int i, num, digits[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num)
    {
        digits[num%10]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++)
        if(!digits[i])
            printf("%d: %d\n", i, digits[i]);

    return 0;
}
