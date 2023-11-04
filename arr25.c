#include <stdio.h>
int main(){
    
    printf("enter the no of rows and coloumnss");
    
	int arr1[3][3];
	int sum=0;
	for(int i=0;i<3;i++){
	    printf("the row elements");
	    for(int j=0;j<3;j++){
		      scanf("%d",&arr1[i][j]);
		      
	}
	printf("\n");
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        if(j==2-i){
	        sum=sum+arr1[i][j];
	    }
	}
	}
	printf("%d",sum);
	
}
