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
	
			
	for(int j=l;j>b-1;j--){
				s[j]=s[j-1];
			}
	
	
	s[b-1]=a;
	printf("%s",s);
}
