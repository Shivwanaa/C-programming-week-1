#include <stdio.h>

int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a==b && b==c)
    printf("Its an equillateral triangle");
   else if(a==b || b==c ||a==c)
    printf("Its an issocelles triangle");
   else
    printf("Its Scalene triangle");
   
   
}
