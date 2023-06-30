#include<bits/stdc++.h>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    int a[6];
    int p,q,r,s,t,u;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    p=(a[0]*a[1])+a[2];
    q=(a[0]+a[1])*a[2];
    r=a[0]*(a[1]+a[2]);
    s=a[0]+(a[1]*a[2]);
    t=a[0]+a[1]+a[2];
    u=a[0]*a[1]*a[2];
    int m1= max(p,q);
    int m2= max(r,s);
    int m3 = max(t,u);
    int m4= max(m1,m2);
    (m4>m3)?cout<<m4
           :cout<<m3;
}
