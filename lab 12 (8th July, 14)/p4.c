#include <stdio.h>

int main(void)
{
    int i, array[6], result;

    printf("Please enter an integer number:\n");
    scanf("%d", &array[0]);

    printf("%d ", array[0]);

    result = array[0];

    for(i=1; i<6; i++)
    {
        array[i] = result*2;
        result = array[i];
        printf("%d ", result);
    }


    return 0;
}
