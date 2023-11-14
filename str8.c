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
        if(s1[i]!=s1[c-i-1]){
            b=1;
        }
    }
    if(b=1){
        printf("Its not a pallindrome");
    }
    else{
        printf("its not a pallindrome");
    }
}
