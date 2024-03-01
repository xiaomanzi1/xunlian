#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int x=1,y=1;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
            x*=a[i]-'@';
    }
    for(int i=0;i<b.length();i++)
    {
        y*=b[i]-'@';
    }
    x%=47;
    y%=47;
    if(x==y) cout<<"GO";
    else cout<<"STAY";
    return 0;
}