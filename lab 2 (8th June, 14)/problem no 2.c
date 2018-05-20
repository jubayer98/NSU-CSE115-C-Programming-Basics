#include <stdio.h>
int main(void)
{
    int num, first_unit, second_unit, third_unit;
    printf("Please Enter an Integer Number: ");
    scanf("%d", &num);
    third_unit = num%10;
    num = num/10;
    second_unit = num%10;
    num = num/10;
    first_unit = num;
        printf("%d hundreds\n", first_unit);
        printf("%d tens\n", second_unit);
        printf("%d units", third_unit);
    return 0;
}
