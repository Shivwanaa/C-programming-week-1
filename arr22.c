#include <stdio.h>
int main(){
    
    printf("enter the no of rows and coloumnss");
    
	int arr1[3][3];
	int arr2[3][3];
	int aarr[3][3];
	int sarr[3][3];
	for(int i=0;i<3;i++){
	    printf("the row elements");
	    for(int j=0;j<3;j++){
		      scanf("%d",&arr1[i][j]);
	}
	printf("\n");
	}
	for(int i=0;i<3;i++){
	    printf("the row elements");
		for(int j=0;j<3;j++)
		{
		   scanf("%d",&arr2[i][j]);
		
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        aarr[i][j]=arr1[i][j]+arr2[i][j];
	        sarr[i][j]=arr1[i][j]-arr2[i][j];
	    }
	    
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        printf("%d ",aarr[i][j]);
	    }
	    printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        printf("%d ",sarr[i][j]);
	    }
	    printf("\n")
	}
}

