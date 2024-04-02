#include "bits/stdc++.h"
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n>0)
    cout<<n<<endl;
    else if(n>-10 and n<0){
        cout<<0<<endl;
    }
    else{
        long long int x=n/10;
        int p=n%10;
        long long int y=((n/100)*10)+p;
        if(x>y)
        cout<<x<<endl;
        else 
        cout<<y<<endl;
    }
}
