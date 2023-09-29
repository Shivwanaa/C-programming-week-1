#include <stdio.h>

int main()
{
   
    int units,c;
    scanf("%d",&units);
    if(units<=100){
        c=units*2;}
    else if(units<=500){
        c=units*3;}
    else if(units<=1000){
        c=units*4;}
    else{
        c=units*5;
    }
    printf("cost is %d",c);
    
    
        
    }
    