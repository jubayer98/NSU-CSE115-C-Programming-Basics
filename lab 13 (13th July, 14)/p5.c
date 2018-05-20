#include<stdio.h>

int Fibonacci(int n);

int main(void)
{
   int num, i;

   scanf("%d", &num);

   printf("Fibonacci series\n");

   for (i=0; i<num; i++)
   {
      printf("%d\n", Fibonacci(i));
   }

   return 0;
}

int Fibonacci(int n)
{
   if (n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else
      return (Fibonacci(n-1) + Fibonacci(n-2));
}
