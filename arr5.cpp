#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int h=n-1;
	for(int i=0;i<(n/2);i++){
		int t=arr[i];
		arr[i]=arr[h];
		arr[h]=t;
		h--;
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}
