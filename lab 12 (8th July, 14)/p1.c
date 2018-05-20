#include <stdio.h>

int main(void)
{
    int a[5], i, sum_even=0, sum_odd=0;

    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]%2 == 0)
            sum_even = sum_even + a[i];
        else
            sum_odd = sum_odd + a[i];
    }

    printf("\nSum of even = %d\nSum of odd = %d", sum_even, sum_odd);

    return 0;
}
