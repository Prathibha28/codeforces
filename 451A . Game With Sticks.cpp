#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0;
    cin>>n>>m;
    while(n>0 and m>0){
        n--;
        m--;
        i++;
    }
    if(i%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
    return 0;
}
