#include "bits/stdc++.h"
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        int x=3;
        while(n%x!=0){
            x=2*x+1;
        }
        cout<<n/x<<endl;
    }
}
