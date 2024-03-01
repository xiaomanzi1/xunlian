#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,ans=-2147483647;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(i==1) b=a;
        else b=max(a,a+b);
        ans=max(ans,b);
    }
    cout<<ans;
    return 0;
}