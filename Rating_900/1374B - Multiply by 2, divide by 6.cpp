#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        long long c=0;
        int p=0;
        while(n!=1){
            if(n%6!=0 and p==1){
                break;
            }
            else if(n%6==0){
                n=n/6;
                p=0;
                c++;
            }
            else{
                n=n*2;
                p=1;
                c++;
            }
        }
        if(n!=1)
        cout<<-1<<endl;
        else
        cout<<c<<endl;
    }
}
