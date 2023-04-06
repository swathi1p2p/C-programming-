#include <stdio.h>

int main()
{
   int num1, num2, lcm, max;

   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   max = (num1 > num2) ? num1 : num2;

   while(1)
   {
      if(max % num1 == 0 && max % num2 == 0)
      {
         lcm = max;
         break;
      }
      ++max;
   }

   printf("LCM of %d and %d is %d", num1, num2, lcm);
   return 0;
}