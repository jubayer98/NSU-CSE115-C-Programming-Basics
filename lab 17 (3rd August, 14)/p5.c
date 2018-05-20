#include <stdio.h>
#define N 6

int main(void)
{
    int arr[N], i, sum=0, *p;
    p = &arr;

    printf("Enter the Array: ");

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + *p;
    }

    printf("\nResult is %d \n\n", sum);

    return 0;
}
