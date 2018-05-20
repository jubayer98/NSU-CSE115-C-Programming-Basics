#include <stdio.h>

int feb(int d);

int main(void)
{
    int choice, month;
    printf("Please Choose an Option from below: \n");
    printf("\n\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n\n");
    scanf("%d", &choice);

    if(choice==1 || choice==3 || choice==5 || choice==7 || choice==8 || choice==10 || choice==12)
    {
        printf("\n\nThe month has 31 days.\n\n");
    }
    else if(choice==4 || choice==6 || choice==9 || choice==11)
    {
        printf("\n\nThe month has 30 days.\n\n");
    }
    else if(choice==2)
    {
        int leap_year = feb(month);
    }
    else
    {
        printf("\n\nInvalid Input.\n\n");
    }

    return 0;
}

int feb(int d)
{
    printf("\n\nPlease Enter the year: ");
    scanf("%d", &d);

    if(d%400 == 0)
    {
        printf("\n\nThe month has 28 days.\n\n");
    }

    else if(d%100 == 0)
    {
        printf("\n\nThe month has 28 days.\n\n");
    }

    else if(d%4 == 0)
    {
        printf("\n\nThe month has 29 days.\n\n");
    }
    else
    {
        printf("\n\nThe month has 28 days.\n\n");
    }
}
