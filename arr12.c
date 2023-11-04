#include <stdio.h>
int main(){
	int n;
	int c;
	int a;
	printf("The no of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i=i+c+1){
	    c=0;
		for(int j=i+1;j<n;j++)
		{
		    if(arr[i]==arr[j])
			c++;
			
			
		}
			
			
			
		if(c==0){
			    printf("%d",arr[i]);
			    break;
			    
			}
			
		
		
		
	}
	
				
	
	}
