#include <stdio.h>
int main(){
    
    printf("enter the no of rows and coloumnss");
    
	int arr1[3][3];
	int c=0;
	for(int i=0;i<3;i++){
	    printf("the row elements");
	    for(int j=0;j<3;j++){
		      scanf("%d",&arr1[i][j]);
		      
	}
	printf("\n");
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        if(i==j){
	            if(arr1[i][j]==1){
	                c++;
	            }
	        }
	       else{
	           if(arr1[i][j]==0){
	                    c++;
	                }
	            }
	            
	        
	}
	}
	if(c==9){
	    printf("this is an identity matrix");
	}
	else{
	    printf("This is not a identity matrix");
	}
	
}
