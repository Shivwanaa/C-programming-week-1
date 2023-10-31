#include <stdio.h>
#include <stdio.h>
int main(){
	int n,k;
	printf("no of elements is:");
	scanf("%d",&n);
	printf("enter the kth largest or smallest:");
	scanf("%d",&k);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>=arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("The %d largest is %d\n",k,arr[n-k]);
	printf("The %d smallest element is %d",k,arr[k-1]);
}
