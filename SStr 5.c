#include <stdio.h>

int main()
{
    char s1[100];
    scanf("%[^\n]s",s1);
    int c=0;
    int t;
    for(int i=0;s1[i]!='\0';i++){
        c=c+1;
        
    }
    for(int i=0;i<c/2;i++){
        t=s1[i];
        s1[i]=s1[c-1];
        s1[c]=t;
        c--;
    }
    printf("reverse is %s\n",s1);
    return 0;
}
