#include <stdio.h>
#include <string.h>
int main(){
	char a;
	scanf("%c",&a);
	printf("enter the position");
	int b;
	scanf("%d",&b);
	char s[100];
	scanf("%s",s);
	int l=strlen(s);
	for(int i=0;s[i]!='\0';i++){
		if(i==b-1){
			s[i]=a;
			for(int j=l;j>b;j--){
				s[j]=s[j-1];
			}
		}
	}
	printf("%s",s);
}

