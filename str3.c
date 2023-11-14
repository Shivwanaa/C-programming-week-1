#include <stdio.h>

int main()
{
    char s1[]="hello";
    char s2[]="world";
    char s3[100];
    int k=0;
    for(int i=0;s1[i]!='\0';i++){
        s3[k++]=s1[i];
    }
    for(int i=0;s2[i]!='\0';i++){
        s3[k++]=s2[i];
    }
    printf("s1 is %s\n",s1);
    printf("s2 is %s\n",s2);
    printf("s3 is %s",s3);

    return 0;
}
