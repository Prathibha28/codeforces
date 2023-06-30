#include<bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    int i=0;
    string s;
    cin>>s;
    while(i<s.size()){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=3;
        }
        else{
            cout<<s[i];
            if(s[i+1]=='W' and s[i+2]=='U' and s[i+3]=='B'){
                cout<<" ";
            }
            i++;
        }
    }
	return 0;
}
