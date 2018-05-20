#include <stdio.h>

int main(void)
{
    int i;
    struct student
    {
        int id;
        float cgpa;
    };

    struct student std[5];

    for(i=0; i<5; i++)
    {
        scanf("%d", &std[i].id);
        scanf("%f", &std[i].cgpa);
    }

    for(i=0; i<5; i++)
    {
        printf("%d %f\n", std[i].id, std[i].cgpa);
    }
    //std[1].id = 6461;
    //std[1].cgpa = 3.00;

    //printf("\n%d %f", std[1].id, std[1].cgpa);

    return 0;
}
