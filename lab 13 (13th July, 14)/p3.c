#include <stdio.h>
#define N 10

int main(void)
{
    int number[N], i, j, temp;

    printf("Please Enter The Numbers Here:\n");

    for(i=0;  i<N; i++)
    {
        scanf("%d", &number[i]);
    }

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(number[j] > number[i])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    printf("\nOutput Result is:\n");

    for(i=0; i<N; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n\n");

    return 0;
}
