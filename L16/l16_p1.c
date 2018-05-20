#include<stdio.h>

int main(void)
{
    int num, rem;
    int zero, one, two, three, four, five, six, seven, eight, nine;
    zero = one = two = three = four = five = six = seven = eight = nine = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num)
    {
        switch(num%10)
        {
            case 0: zero++; break;
            case 1: one++; break;
            case 2: two++; break;
            case 3: three++; break;
            case 4: four++; break;
            case 5: five++; break;
            case 6: six++; break;
            case 7: seven++; break;
            case 8: eight++; break;
            case 9: nine++; break;
        }
        num /= 10;
    }

    if(!zero) printf("0: %d\n", zero);
    if(!one) printf("1: %d\n", one);
    if(!two) printf("2: %d\n", two);
    if(!three) printf("3: %d\n", three);
    if(!four) printf("4: %d\n", four);
    if(!five) printf("5: %d\n", five);
    if(!six) printf("6: %d\n", six);
    if(!seven) printf("7: %d\n", seven);
    if(!eight) printf("8: %d\n", eight);
    if(!nine) printf("9: %d\n", nine);
    return 0;
}
