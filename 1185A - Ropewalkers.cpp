#include <bits/stdc++.h>
using namespace std;
#include<array>
int main()
{
    int a[3],d,p=0,n=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    cin>>d;
    sort(a,a+3);
    while((a[1]-a[0])<d){
        a[0]=a[0]-1;
        n++;
    }
    while((a[2]-a[1])<d){
        a[2]=a[2]+1;
        p++;
    }
    cout<<p+n;
}
