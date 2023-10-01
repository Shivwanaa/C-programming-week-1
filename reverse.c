#include <stdio.h>

int main()
{   
    int n,a;
    int rev=0;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        n=n/10;
        rev=(rev*10)+a;
        
    }
    printf("The reverse of the number is %d",rev);
   
       
   
   
   
   
   
   
   
   
}
