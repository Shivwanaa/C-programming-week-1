#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        c=c+1;
    }
    printf("%d",c);

    return 0;
}
