#include <stdio.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b &&a>c){
		printf("a=%f is the greatest ",a);
		
	}
	else if(b>a && b>c){
		printf("b=%f is the greatest",b);
	}
	else{
		printf("c=%f is the greatest",c);
	}
}
