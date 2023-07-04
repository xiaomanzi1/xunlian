#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,n,ans;
    cin>>a>>b;
    n=a%b;
    ans=a/b;
    for(i=n;i<b;++i)
        cout<<ans<<" ";
    for(i=0;i<n;++i)
        cout<<ans+1<<" ";
}