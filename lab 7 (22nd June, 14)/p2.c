#include <stdio.h>

double data(double w_a, double r_a);

int main(void)
{
    int choice, balance=40000;
    double withdraw, remainder;
    printf("Welcome.\n");
    printf("Choose The Following Option.\n");
    printf("\n1.Check Your Balance.\n2.Withdraw Money.\n");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Your Current Account Balance is 40,000BDT.\n");
    }

    else if(choice==2)
    {
        double result = data(withdraw, remainder);
    }

    else
    {
        printf("Invalid Option Chosen.\n");
    }

    return 0;
}

double data(double w_a, double r_a)
{
    printf("Your Current Balance is 40,000BDT.\n");
    printf("Please enter your withdraw amount here: ");
    scanf("%lf", &w_a);

    if(w_a<=40000)
    {
        r_a = 40000-w_a;
        printf("Your Remaining Balance is %.2lf BDT", r_a);
    }
    else
    {
        printf("You don't have sufficient BALANCE!!!\n");
    }
}
