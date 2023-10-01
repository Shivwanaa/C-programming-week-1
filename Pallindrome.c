#include <stdio.h>

int main()
{   
    int n,a,org;
    int rev=0;
    scanf("%d",&n);
    org=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        rev=(rev*10)+a;
    }
    if(org==rev){
        printf("the number is a pallindrome");
    }
    else
      printf("not a pallindrome");
       
   
   
   
   
   
   
   
   
}
