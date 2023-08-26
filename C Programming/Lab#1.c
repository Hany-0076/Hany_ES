#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=0 , y=0;
   printf("Enter Two Numbers:");
   scanf("%d %d",&x,&y);
   printf("First Number is: %d \n",x);
   printf("Second Number is: %d\n", y);
   printf("Addition of the two numbers is: %d \n",x+y);
   printf("Subtraction of the two numbers is: %d \n",x-y);
   printf("Multiplication of the two numbers is: %d \n",x*y);
   printf("Division of the two numbers is: %d \n ",x/y);
   printf("Reminder of the two numbers is: %d \n",x%y);
    return 0;
}
