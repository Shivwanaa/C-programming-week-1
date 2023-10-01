#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int mul=1;
   for(int i=1;i<=n;i++){
       mul=mul*i;
       
   }
   printf("%d This is the factorial of the number",mul);
   
   
   
   
}
