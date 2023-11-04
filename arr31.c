#include <stdio.h>
int main(){
	int n,c,a,k;
	a=0;
	scanf("%d",&k);
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    c=0;
	    for(int j=i+1;j<n;j++){
	        if((arr[i]+arr[j])%k==0){
	            c++;
	            
	        }
	        
	            
	        }
	        if(c==n-i-1){
	            a++;
	            
	    }
}
if(a==4){
    printf("TRUE");
}

}
