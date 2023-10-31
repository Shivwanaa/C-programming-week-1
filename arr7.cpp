#include <stdio.h>
int main(){
	int n;
	printf("The no of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int k;
	printf("the element that has to be counted is:");
	scanf("%d",&k);
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==k){
				c=c+1;
				
			}
			break;
		}
		
	}
	printf("The number of times %d is repeated is %d",k,c);
}
