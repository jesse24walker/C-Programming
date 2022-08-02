#include <stdio.h>
#define SUBTRACT(a,b) (a-b)
#define MULTIPLY(a,b) (a*b)
int main (void)
{
   int a,b;
   while(1)
   {
   printf("\nEnter Two Numbers (-1 as first number to stop)");
   scanf("%d %d",&a,&b);
  
   if(a==-1) break;
  
   printf("\nA-B is : %d",SUBTRACT(a,b));
   printf("\nA*B is : %d",MULTIPLY(a,b));
}

printf("My Name : %s","YOUR NAME HERE");
printf("\nMy Class : %s","YOUR CLASS HERE");
printf("\nMy Section: %s","YOUR SECTION HERE");
   return 0;
}
