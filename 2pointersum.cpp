#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s=12;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    int st,en;
    
    while(j<n && sum+a[j]<=s){
        sum=sum+a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j;
    }
    while(j<n){
        sum=sum+a[j];
        while(sum>s){
            sum=sum-a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
        
        
    }
    cout<<st<<" "<<en;
}
