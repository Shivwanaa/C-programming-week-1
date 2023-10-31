#include <stdio.h>
int main(){
	int n;
	printf("The no of elements: ");
	scanf("%d",&n);
	int s=0,m=0;
	int arr[n];
	int a=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			
				a=arr[i];
				break;
				
				
				
			}
			
			
			}
		
		
		
	}
	printf("The element that is first repeated %d",a);
				
	
	}
	
	

