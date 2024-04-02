#include "bits/stdc++.h"

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,s=0;
    while(m--){
        if(a[i]<0)
        s+=a[i];
        else
        break;
        i++;
    }
    cout<<abs(s)<<endl;
}
