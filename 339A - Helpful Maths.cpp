#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    string a;
    cin>>a;
    a.erase(std::remove( a.begin(),a.end(),'+'),a.end());
    sort(a.begin(),a.end());
    cout<<a[0];
    for(int i=1;i<a.length();i++){
        cout<<"+"<<a[i];
    }
}
