#include <bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    int n,p=0;
    int a[30][2];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][0]==a[j][1]){
                p++;
            }
        }
    }
    cout<<p;
    return 0;
}
