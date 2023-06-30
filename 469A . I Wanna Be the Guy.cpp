#include<bits/stdc++.h>
using namespace std;
int main()
{
    int o;
    cin>>o;
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=1;
    int p,q,t=0;
    while(i<=o){
        p=count(a,a+m,i);
        q=count(b,b+n,i);
        if(p+q>0){
            t++;
        }
        i++;
    }
    if(t==o){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}
