#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int s=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0];
	for(int i=1;i<n;i++){
		s=s+arr[i-1];
		
		if(max<=arr[i]){
			max=arr[i];
		}
		else if(min>=arr[i]){
			min=arr[i];
		}
	}
		
	
	printf("max=%d min=%d\n",max,min);
	int avg=s/n;
	printf("Avg of the elements is %d",avg);
}
