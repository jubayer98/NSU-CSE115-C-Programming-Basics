#include <stdio.h>

int main(void)
{
    struct student
    {
        int id;
        float cgpa;
    };

    struct student std[5];

    scanf("%d", &std[0].id);
    scanf("%f", &std[0].cgpa);

    printf("%d %f", std[0].id, std[0].cgpa);

    std[1].id = 6461;
    std[1].cgpa = 3.00;

    printf("\n%d %f", std[1].id, std[1].cgpa);

    return 0;
}
