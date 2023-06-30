#include <bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    int n,p;
    vector<int> a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }
    sort(a.begin(),a.end());
    while(a.size()>0){
        for(int i=a.size()-1;i>=0;i--){
            if(a[0]==1){
                a.erase(a.begin(),a.end());
                b.push_back(1);
            }
            else if(a[i]%a[0]==0){
                a.erase(a.begin()+i);
                b.push_back(a[0]);
            }
        }
    }
    map<int,int> d;
    for(int i=0;i<b.size();i++){
        d[b[i]]++;
    }
    cout<<d.size();
    return 0;
}
