#include <stdio.h>

int main(void)
{
    int i, max=0, min=5, id_max, id_min, sum=0;
    float avg = 0;
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

    //for(i=0; i<5; i++)
    //{
      //  printf("%d %f\n", std[i].id, std[i].cgpa);
    //}

    for(i=0; i<5; i++)
    {
        if(max < std[i].cgpa)
        {
            max = std[i].cgpa;
            id_max = i;
        }
            //printf("\nhighest cgpa is %d %f\n", std[i].id, std[i].cgpa);
        if(min > std[i].cgpa)
        {
            min = std[i].cgpa;
            id_min = i;
        }

        //printf("\nhighest cgpa is %d %f\n", std[i].id, std[i].cgpa);
        sum = sum + std[i].cgpa;
    }

    avg = sum/5.0;
    printf("\nMax ID = %d, cgpa = %d", std[id_max].id, max);
    printf("\nMin ID = %d, cgpa = %d", std[id_min].id, min);
    printf("\n%f\n", avg);

    return 0;
}
