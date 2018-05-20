#include<stdio.h>
#define N 5


int main(void)
{
    int list[N], i, j, temp;
    printf("Enter %d numbers: ", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 0, j = N - 1; i < N/2; i++, j--)
    {
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }

    for(i = 0; i < N; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");
    return 0;
}
