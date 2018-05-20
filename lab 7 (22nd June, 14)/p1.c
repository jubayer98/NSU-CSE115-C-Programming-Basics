#include <stdio.h>

int warning(int x, int y);

int main(void)
{
    int distance, speed, result;
    printf("Please enter the distance covered: ");
    scanf("%d", &distance);
    printf("Please enter the speed: ");
    scanf("%d", &speed);
    result = warning(distance, speed);

    return 0;
}

int warning(int x, int y)
{
    if(x>10 && x<80)
    {
        if(y>100)
        {
            printf("Crossed Limit.");
        }
        else
        {
            printf("Within Limit.");
        }
    }
    else
    {
        printf("Within Limit.");
    }
}
