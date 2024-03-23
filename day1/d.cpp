#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,T;
    cin>>s>>T;
    int cnt=0;
    for(int i=0; i<s.length() && T.length(); i++)
    {
        if(s[i]!=T[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}