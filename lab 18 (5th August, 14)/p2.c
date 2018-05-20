#include <stdio.h>

int main(void)
{
    struct student
    {
        int id;
        float cgpa;
    };

    struct student me, you;
    me.id = 51603;
    me.cgpa = 3.97;

    you.id = 51602;
    you.cgpa = 3.27;

    if(me.cgpa > you.cgpa)
    {
        printf("%d %f is high then %d %f\n", me.id, me.cgpa, you.id, you.cgpa);
    }
    else
    {
        printf("%d %f is high then %d %f", you.id, you.cgpa, me.id, me.cgpa);
    }

    //printf("%d %f=", me.id, me.cgpa);
    return 0;
}

