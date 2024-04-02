#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int p=n,s=n;
    int q=n;
    while(q>=m){
        p+=(q/m);
        q=(q/m)+(q%m);
    }
    cout<<p;
}
