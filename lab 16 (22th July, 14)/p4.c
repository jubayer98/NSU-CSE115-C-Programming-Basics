#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[999];
    int length, i;

    printf("Enter your name: ");
    gets(name);

    length = strlen(name);

    for(i=0; i<length; i++)
    {
        if(name[i] == ' ')
        {
            length--;
        }
    }

    printf("\nTotal letter of your name is %d \n\n", length);

    return 0;
}
