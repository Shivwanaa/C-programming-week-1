#include <stdio.h>

int main() {
    // Write C code here
    
	int n,x,c,avg;
	scanf("%d%d",&n,&x);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    avg=0;
	    avg=(x+arr[i])/2;
	    c=0;
	    
	    for(int j=0;j<n;j++){
	        if(arr[j]==avg){
	            c++;
	            
	            
	            }
	            
	        }
	        
	       printf("%d ",c);
	        
	        }
	        
	    }
	
	
	
