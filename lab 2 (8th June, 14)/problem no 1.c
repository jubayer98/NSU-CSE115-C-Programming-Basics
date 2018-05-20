#include <stdio.h>
int main(void)
{
    double C, F;
    //on the avobe line C for centigrade scale and F for fahrenheit scale
    /*centigrade = 'C';
    fahrenheit = 'F';*/
    printf("Please Enter Today's Temperature is centigrade scale: ");
    scanf("%lf", &C);
    F = ((C/5)*9)+32;
    printf("Today's Temperature in fahrenheit scale is %.2lf", F);
    printf("\nThank You!");
    return 0;
}
