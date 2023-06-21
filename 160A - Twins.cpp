#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0,m=0;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        p+=a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        q+=a[i];
        if(q>(p/2)){
            m=i+1;
            break;
        }
    }
    cout<<m;
}
