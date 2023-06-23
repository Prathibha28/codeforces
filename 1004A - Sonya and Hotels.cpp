#include <bits/stdc++.h>
using namespace std;
#include<array>
#include<vector>
int main()
{
    int n,d,a[100],x;
    vector<int> b;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<2;
    }
    else{
        for(int i=0;i<n;i++){
            x=0;
            x=a[i]+d;
            if((a[i+1]-x)>=d){
                b.push_back(x);
            }
        }
        b.push_back(a[n-1]+d);
        for(int i=n-1;i>=0;i--){
            x=0;
            x=a[i]-d;
            if((x-a[i-1])>=d){ 
                b.push_back(x);
            }
        }
        b.push_back(a[0]-d);
        sort(b.begin(),b.end());
        b.erase(unique(b.begin(),b.end()),b.end());
        cout<< b.size();
        }
}
