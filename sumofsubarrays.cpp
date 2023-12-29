#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x[3];
    for(int i=0;i<3;i++){
        cin>>x[i];
    }
    int m=0;
    int sum=0;
    for(int k=0;k<3;k++){
       for(int i=0;i<3;i++){
           m=0;
            for(int j=k;j<=i;j++){
                   m=x[j]+m;
            
        }
        sum=sum+m;
    }
    }
    

 cout<<sum;
}
