#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a[6];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    int pr=a[1]-a[0];
    int dist=2;
    int i=2;
    int ans=2;
    while(i<6){
        if(pr==a[i]-a[i-1]){
            dist++;
        }
        else{
            pr=a[i]-a[i-1];
            dist=2;
        }
        i++;
        ans=max(ans,dist);
    }

    cout<<ans;
    }
