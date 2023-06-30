#include<bits/stdc++.h>
using namespace std;
#include<array>
int main()
{
    int n,m,cur,pre=1000;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int i=0;
    while(i<(m-n+1)){
        cur = a[n+i-1]-a[i];
        if(cur<pre and cur>=0){
            pre=cur;
        }
        i++;
    }
    cout<<pre;
}
