#include<stdio.h>

int main(void)
{
    int list[5], i;
    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", list[i]);
    }

    printf("\n");
    return 0;
}
