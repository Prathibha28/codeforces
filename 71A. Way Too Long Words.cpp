#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    int n,p=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        p=s.length();
        if(p>10){
        cout<<s[0]<<p-2<<s[p-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
}
