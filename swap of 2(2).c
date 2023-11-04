#include <stdio.h>


int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swap of a is %d and swap of b is %d",a,b);
	return 0;
	}
	
