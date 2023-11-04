#include <stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<n;i=i+c+1){
        c=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                
            }
            
        }
        
           printf("the element %d is %d\n",arr[i],c+1);
    }
}
