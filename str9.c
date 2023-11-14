#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    int c=0;
    int b;
    for(int i=0;s1[i]!='\0';i++){
        c=c+1;
    }
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'){
            printf("%c ",s1[i]);
        }
    }
}
