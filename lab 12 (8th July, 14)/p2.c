#include <stdio.h>

int main(void)
{

    int array1[5], array2[5], i, subtract[5];

    printf("Input Array 1: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Input Array 2: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("Output Array: ");

    for(i=0; i<5; i++)
    {
        subtract[i] = array1[i] - array2[i];
        printf("%d ", subtract[i]);
    }
    printf("\n");

    return 0;
}
