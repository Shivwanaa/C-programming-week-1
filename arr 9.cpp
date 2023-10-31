
#include <stdio.h>
int main(){
	int n;
	printf("The no of elements: ");
	scanf("%d",&n);
	int s=0,m=0;
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n+1;i++){
		s=s+i;
		
	}
	for(int i=0;i<n;i++){
		m=m+arr[i];
	}
	printf("%d",s);
	int a=s-m;
	printf("The missing number is %d",a);
}
	
