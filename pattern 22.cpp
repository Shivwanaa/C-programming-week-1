#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		
			
	
	    for(int j=0;j<=i;j++){
	    	if(i==j){
	    		printf("%d",i+1);
			}
			else{
				printf("%d*",i+1);
			}
		}
	printf("\n");
	}
	for(int i=0;i<n;i++){
		
			
	
	    for(int j=0;j<n-i;j++){
	    	if(j==n-i-1){
	    		printf("%d",n-i);
			}
			else{
				printf("%d*",n-i);
			}
		}
	printf("\n");
	}
	
	

}
