#include <stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if(arr[i]==arr[j]){
	              c++;
	        }
	   
	}
	if(c>=n/2){
	    printf("The majority element is %d",arr[i]);
	    break;
	}
	    
	

	    
	}
}
