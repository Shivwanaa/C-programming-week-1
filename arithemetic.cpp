#include <stdio.h>
int main()
{
	int a,b,add,sub,div,mul,modulus;
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	div=a/b;
	mul=a*b;
	modulus=a%b;
	printf("addition is %d:",add);
	printf("subraction is %d:",sub);
	printf("division is %d:",div);
	printf("multiplication is %d:",mul);
	printf("the remainder is %d:",modulus);
	


}
