#include <stdio.h>
int main(void)
{
    int side = 8;
    int surface_area = 6*side*side;
    int volume = side*side*side;
    printf("The Surface Area is: %d", surface_area);
    printf("\nThe Volume is: %d", volume);
    return 0;
}
