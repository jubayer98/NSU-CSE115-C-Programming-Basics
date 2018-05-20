#include <stdio.h>

int data1(int);
int data2(int);
int data3(int);
int data4(int);
int data5(int);

int main(void)
{
    int age;
    printf("Please enter your age here: ");
    scanf("%d", &age);

    if(age <= 5)
    {
        int result = data1(age);
    }

    else if(age>5 && age<14)
    {
        int result = data2(age);
    }

    else if(age>14 && age<45)
    {
        int result = data3(age);
    }

    else if(age>45 && age<65)
    {
        int result = data4(age);
    }

    else if(age > 65)
    {
        int result = data5(age);
    }

    return 0;
}

int data1(int x)
{
    printf("Kid's Playground.\n");
}

int data2(int x)
{
    printf("Kid's Sports.\n");
}

int data3(int x)
{
    printf("Indoor:\n1.Chess\n2.Cards\n3.Table Tennis\n4.Squash\n\nOutdoor:\n1.Soccer\n2.Tennis\n3.Badminton\n4.Basketball\n");
}

int data4(int x)
{
    printf("1. Gulf\n2.Chess\n3.Cards\n");
}

int data5(int x)
{
    printf("Invalid members!\n");
}
