#include <stdio.h>
int main(){
	char s[100];
	scanf("%s",s);
    int max,c;
	for(int i=0;s[i]!='\0';i++){
          c=0;
		  for(int j=0;s[j]!='\0';j++){
		  	c++;
		  }
		  max=0;
		  if(max<c){
		  	max=c;
		  	
		  }
		  
		  	
		  }
		  printf("%d",max);

		  		
		
	
}
