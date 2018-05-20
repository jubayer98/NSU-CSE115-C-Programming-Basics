#include <stdio.h>
#include <math.h>

float section(float x);

int main(void)
{
    float total_student;
    printf("Please enter the total number of students: ");
    scanf("%f", &total_student);

    float total_section = section(total_student);

    printf("The required number of section is: %.0f", ceil(total_section));

    return 0;
}

float section(float x)
{
    float result = x/30;
    return result;
}
