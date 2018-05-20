#include<stdio.h>

int totalAmount(void);

int main(void)
{
    int result;

    result = totalAmount();
    printf("Total Amount is %d\n", result );
    //printf("Total Amount is %d\n", totalAmount() );

    return 0;
}

int totalAmount(void)
{
    int x, y, total;

    printf("Total courses: ");
    scanf("%d", &x);
    printf("Fees for each course: ");
    scanf("%d", &y);

    total = x * y;

    return total;
    //return x * y;
}
