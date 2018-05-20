#include <stdio.h>

int main(void)
{
    int i, array[5], max=0, min=999, position1, position2;

    printf("Input Array: ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] > max)
        {
            max = array[i];
            position1 = i;
        }
        if(array[i] < min)
        {
            min = array[i];
            position2 = i;
        }
    }
    printf("%d", max);
    array[position1] = min;
    array[position2] = max;

    printf("Output Array: ");

    for(i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
