#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   int c=0;
   while(n>0){
       n=n/10;
       c=c+1;
       
       
   }
   printf("The length of the number is %d",c);
       
   
   
   
   
   
}
