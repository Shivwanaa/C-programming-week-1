#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n];
    int cr[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cr[i]=-a[i];
    }
    
    int msum=0;
    for(int i=0;i<=n;i++){
        msum=a[i]+msum;
    }
    cout<<msum<<endl;
    int s=0;
    int nsum=0;
    int c=0;
    for(int i=0;i<n;i++){
        s=s+cr[i];
        if(s<0){
            s=0;
        }
        nsum=max(nsum,s);
    }
    cout<<nsum<<endl;
    msum=msum+nsum;
    
    cout<<msum;
}

