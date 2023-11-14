#include <stdio.h>

int main()
{
    char s1[100]="hello";
    char k;
    scanf("%c",&k);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==k){
            printf("The first occurence is %d",i+1);
            break;
        }
        
    }
    return 0;
}
