#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
    scanf("%s",s);
    int b=strlen(s);
    int max=0;
    int min=b;
    int c,maxi,mini;
	for(int i=0;s[i]!='\0';i++){
          c=0;
		  for(int j=0;s[j]!='\0';j++){
		      if(s[i]==s[j]){
		  	c++;}
		  }
		  
		  if(max<c){
		  	max=c;
		  	maxi=i;
		  	
		  }
		  else if(min<b){
		      min=c;
		      mini=i;
		  }
	}
		  printf("%c %c",s[maxi],s[mini]);
    
}
