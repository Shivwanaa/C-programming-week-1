#include <stdio.h>


int main(){
	int n,t,pos;
	scanf("%d",&n);
	scanf("%d",&t);
	int arr[n];
	printf("Enter a sorted array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	 if(t>arr[i] && t<arr[i+1]){
	    pos=i+1;
	    for(int k=n-1;k>=pos;k--){
	        arr[k+1]=arr[k];
	        
	    }
	    arr[pos]=t;
	}
	}
	for(int i=0;i<n+1;i++){
	    printf("%d",arr[i]);
	}
	
}
