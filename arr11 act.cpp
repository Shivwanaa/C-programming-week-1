#include <stdio.h>
int main(){
	int n,a;
	printf("The no of elements: ");
	scanf("%d",&n);
	int s=0,m=0;
	int c=0;
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    c=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			    printf("%d ",arr[i]);
			    c++;
			    break;
			    
			}
	}
	if(c==1){
	    break;
	}
	
}
}
	
	

