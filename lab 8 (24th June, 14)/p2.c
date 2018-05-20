#include <stdio.h>

void power(int);

int main(void)
{
    int watt;
    printf("Please enter the bulb power: ");
    scanf("%d", &watt);

    power(watt);

    return 0;
}

void power(int p)
{
    switch(p)
    {
        case 25: printf("\n2500 LE\n");
            break;
        case 40: printf("\n1000 LE\n");
            break;
        case 60: printf("\n1000 LE\n");
            break;
        case 75: printf("\n750 LE\n");
            break;
        case 100: printf("\n750 LE\n");
            break;
        default:
            printf("\n0 life expectancy\n");
    }
}
