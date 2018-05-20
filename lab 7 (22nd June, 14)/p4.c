#include <stdio.h>

float g_a(float x);
float y_a(float y);
float r_a(float z);

int main(void)
{
    int kind_of_apple;
    float total_cost;
    printf("What Kind of Apple you Want? Choose From Below: \n\n");
    printf("1.Green Apple\n2.Yellow Apple\n3.Red Apple\n\n=> ");
    scanf("%d", &kind_of_apple);

    if(kind_of_apple == 1)
    {
        float GA = g_a(total_cost);
    }
    else if(kind_of_apple == 2)
    {
        float YA = y_a(total_cost);
    }
    else if(kind_of_apple == 3)
    {
        float RA = r_a(total_cost);
    }
    else
    {
        printf("\nInvalid Option Chosen!!!\n\n");
    }

    return 0;
}

float g_a(float x)
{
    float price_GA;
    printf("\n\nPlease Enter your quantity here: ");
    scanf("%f", &x);
    if(x > 2)
    {
        price_GA = (x*100)-10;
        printf("\nYou have to pay %.2f\n\n", price_GA);
    }
    else
    {
        price_GA = x*100;
        printf("\nYou have to pay %.2f\n\n", price_GA);
    }
}

float y_a(float y)
{
    float price_YA;
    printf("\n\nPlease Enter your quantity here: ");
    scanf("%f", &y);
    if(y > 2)
    {
        price_YA = (y*200)-20;
        printf("\nYou have to pay %.2f\n\n", price_YA);
    }
    else
    {
        price_YA = y*200;
        printf("\nYou have to pay %.2f\n\n", price_YA);
    }
}

float r_a(float z)
{
    float price_RA;
    printf("\n\nPlease Enter your quantity here: ");
    scanf("%f", &z);
    if(z > 2)
    {
        price_RA = (z*150)-15;
        printf("\nYou have to pay %.2f\n\n", price_RA);
    }
    else
    {
        price_RA = z*150;
        printf("\nYou have to pay %.2f\n\n", price_RA);
    }
}
