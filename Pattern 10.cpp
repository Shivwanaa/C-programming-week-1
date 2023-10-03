#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int s=0;s<=i;s++){
			printf("*");
			
	}
	printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int s=0;s<n-i;s++){
			printf("*");
		}
		printf("\n");
	}
}
