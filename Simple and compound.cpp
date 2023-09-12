#include <stdio.h>
#include <math.h>
int main(){
	float p,r,t,s,c;
	scanf("%f%f%f",&p,&r,&t);
	s=(p*r*t)/100;
	c=p*(pow((1+(r*0.01)),t));
	printf("the simple intrest is %f and the compound intrest is %f",s,c);
	
}
