#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    int c=0;
    int k=0;
    for(int i=0;s1[i]!='\0';i++){
        k++;
        if(s1[i]==s2[i]){
            c++;
    }
    
        
    }
    if(k==c){
        printf("both of them r equal");
    
}
else{
    printf("both r not equal");
}
}
