#include <stdio.h>
int main(){
	int n,avg,s;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<=i;j++){
            s=s+arr[j];
        }
        
        avg=s/(i+1);
        printf("%d ",avg);
            
        }
        
        
        
           
    
}
