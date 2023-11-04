#include <stdio.h>
int main(){
    
    printf("enter the no of rows and coloumnss");
    
	int arr1[3][3];
	int tarr[3][3];
	for(int i=0;i<3;i++){
	    printf("the row elements");
	    for(int j=0;j<3;j++){
		      scanf("%d",&arr1[i][j]);
		      
	}
	printf("\n");
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        tarr[i][j]=arr1[j][i];
	        
	           
	       
	    
	}
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        printf("%d",tarr[i][j]);
	    }
	    printf("\n");
	}
	
}
