#include <stdio.h>

int main()
{
    int d,m,y;
    printf("Enter the date");
    scanf("%d%d%d",&d,&m,&y);
    
    if((d>31||m>12) || ((m==4||m==6||m==9||m==11) && d==31) || (m==2 && (d==30||d==31)))
            printf("invalid input");
    
            
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        if(d==31  && m==12)
            printf("%d %d %d",1,1,y+1);
        else if(d<=30)
            printf("%d %d %d",d+1,m,y);
        else
            printf("%d %d %d",1,m+1,y);}

    else if(m==2){
        if(d<=27)
            printf("%d %d %d",d+1,m,y);
        else if(d==28){
            if(y%4==0 &&(y%400==0 || y%100!=0))
                printf("%d %d %d",d+1,m,y);
            else
                printf("%d %d %d",1,m+1,y);}}
                
    else            {
        if(d<=29)
            printf("%d %d %d",d+1,m,y);
        else if(d==30)
            printf("%d %d %d",1,m+1,y);
    }}
