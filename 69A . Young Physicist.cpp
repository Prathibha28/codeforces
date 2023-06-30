#include<bits/stdc++.h>
using namespace std;
#include<array>
int main()
{
    int n,p=0,q=0,r=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        cin>>a[i][1];
        cin>>a[i][2];
        p=p+a[i][0];
        q=q+a[i][1];
        r=r+a[i][2];
    }
    (p==0 and q==0 and r==0)?cout<<"YES"
          :cout<<"NO";
}
