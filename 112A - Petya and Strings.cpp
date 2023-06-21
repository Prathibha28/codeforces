#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    int p=0;
    string a,b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);    
    for(int i=0;i<a.length();i++){
        if(a[i]>b[i]){
            p=1;
            break;
        }
        if(a[i]<b[i]){
            p=-1;
            break;
        }
    }
    cout<<p;
}
