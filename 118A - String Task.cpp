#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    int p=0;
    string a;
    char arr[6]={'a','e','i','o','u','y'};
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    for(int i=0;i<6;i++){
        a.erase(std::remove( a.begin(),a.end(),arr[i]),a.end());
    }
    for(int i=0;i<a.length();i++){
        cout<<"."<<a[i];
    }
}
