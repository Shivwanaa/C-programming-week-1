#include <stdio.h>
int main(){
	int n,a;
	int k=0,m=0;
	int earr[100];
	int oarr[100];
	
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    if(arr[i]%2==0){
	        earr[k++]=arr[i];
	        }
	   else{
	       oarr[m++]=arr[i];
	   }
	        }
	for(int i=0;i<k;i++){
	    printf("%d",earr[i]);
	}
	    
	

	    
	}
