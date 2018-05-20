#include <stdio.h>

int main(void)
{
    struct student
    {
        int id;
        float cgpa;
    };

    struct student me;
    me.id = 51603;
    me.cgpa = 3.97;

    printf("%d %f", me.id, me.cgpa);
    return 0;
}
