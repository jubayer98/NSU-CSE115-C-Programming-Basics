#include<stdio.h>
#define PI 3.14159
#define CIRCLE_AREA(X) (PI * (X)* (X))
#define MAX(X, Y) (X >= Y ? X : Y)
#define SQUARE(X) (X * X)
#define FOR(A, B) for( i = A; i <= B; i++ )
#define PRINT(I) printf("%d\n", I)

int main(void)
{
    float radius  = 5;
    float result;

    //result = (3.14159 * (5)* (5));
    result = CIRCLE_AREA(radius);

    printf("Area: %f\n", result);

    printf("Max: %d\n", 20>=11?20:11);
    //printf("Max: %d\n", MAX(20, 11));

    printf("Square: %d\n", SQUARE(2+2));

    int i;
    FOR(5, 10)
        PRINT(i);
    return 0;
}
