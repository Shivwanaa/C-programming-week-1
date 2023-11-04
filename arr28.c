#include <stdio.h>
int main(){
	int n;
	int k;
	scanf("%d",&k);
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    if(arr[i]==k){
	        printf("%d ",k);
	        break;
	    }
	    else if(arr[i]>k){
	        printf("%d",arr[i]);
	        break;
	    }
	    
	}
	
        
        
        
        
           
    
}
