#include <stdio.h>

double yes(double y);
double no(double n);

int main(void)
{
    int choice;
    double price, d_a;
    printf("Please Enter Your Product Amount: ");
    scanf("%lf", &price);

    if(price < 100)
    {
        printf("\n\nYou have to pay %.2lf BDT\n\n", price);
    }

    else
    {
        printf("\n\nAre you a member?\n\n");
        printf("1.YES\n2.NO\n\n=> ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            double d_a = yes(price);
            printf("\n\nYou have to pay %.2lf BDT\n\n", d_a);
        }
        else if(choice == 2)
        {
            double d_a = no(price);
            printf("\n\nYou have to pay %.2lf BDT\n\n", d_a);
        }
        else
        {
            printf("\n\nInvalid Option Chosen! Please try again.\n\n");
        }

    }

    return 0;
}

double yes(double y)
{
    double result = y - 30*y/100;
    return result;
}

double no(double n)
{
    double result = n - 10*n/100;
    return result;
}
