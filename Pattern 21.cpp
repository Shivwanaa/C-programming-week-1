#include <stdio.h>
int main(){
	int n;
	int k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		for(int s=0;s<=i;s++){
			printf("%d",k);
			
			
	}
	k++;
	printf("\n");
	}
	
	int a=k+n-1;
	
	for(int i=0;i<n;i++){
		
		for(int s=0;s<n-i;s++){
			
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
}
