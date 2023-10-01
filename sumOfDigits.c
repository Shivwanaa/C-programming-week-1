#include <stdio.h>

int main()
{   
    int a,n;
    int sum=0;
    
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum+a;
        
        
        
        
    }
    printf("sum of the digits is %d",sum);
    
    
}
