#include<stdio.h>

int main(void)
{
    int list[5], temp[5], i, j;
    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 0, j = 4; i < 5; i++, j--)
    {
        temp[i] = list[j];
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", temp[i]);
    }

    printf("\n");
    return 0;
}
