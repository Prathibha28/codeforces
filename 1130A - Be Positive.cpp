#include <bits/stdc++.h>
using namespace std;
#include<array>
int main()
{
    int v[100];
    int n,pos=0,neg=0,a,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>0)
            pos++;
        else if(v[i]<0)
            neg++;
    }
    (n%2==0)? a=n/2
            : a=(n+1)/2;
    if(pos>=(round(a))){
        sort(v,v+n);
        for(int i=0;i<n;i++){
            if(v[i]>0){ 
                max=v[i];
                break;
            }
        }
    }
    else if(neg>= round(a)){
        sort(v,v+n, greater<int>());
        for(int i=0;i<n;i++){
            if(v[i]<0){
                max=v[i];
                break;
            }
        }
    }
    cout<< max;
}
