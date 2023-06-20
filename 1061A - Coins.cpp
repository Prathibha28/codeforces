#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    long long int n,s,p=0;
    cin>>n;
    cin>>s;
    for(int i=n;i>0;i--){
        if(s>=i){
            p=p+(s/i);
            s=s-((s/i)*i);
        }
    }
    cout<<p;
}
