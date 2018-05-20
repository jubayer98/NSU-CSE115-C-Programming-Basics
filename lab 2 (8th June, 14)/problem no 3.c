#include <stdio.h>
int main(void)
{
    int num1, num2;
    float percentage;
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    percentage = (num2*100)/num1;
    printf("%d is %.2f%% of %d", num2, percentage, num1);
    return 0;
}
