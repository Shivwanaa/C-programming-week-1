#include <stdio.h>
int main(){
	int n,s;
	int c=0;
	printf("The no of elements: ");
	scanf("%d",&n);
	printf("the sum ");
	scanf("%d",&s);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        for(int k=j+1;k<n;k++)
	            if(arr[i]+arr[j]+arr[k]==s){
	                printf("%d %d %d\n",arr[i],arr[j],arr[k]);
	                c++;
	            
	        }
	        
	    }
	    
	    }
	    if(c>0){
	        printf("True");
	    }
	    if(c==0){
	        printf("false");
	}
	
			
		
		
		
	
	
				
	
	}
