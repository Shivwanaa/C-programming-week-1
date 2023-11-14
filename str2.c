#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    
    scanf("%[^\n]s",s1);
    for(int i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }
    printf("s1 is %s\n",s1);
    printf("s2 is %s",s2);

    return 0;
}
