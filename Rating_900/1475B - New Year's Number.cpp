#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        if(n<2020 or n%2020>n/2020)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        //cout<<n%2020<<endl;
    }
}
