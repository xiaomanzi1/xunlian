#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int main()
{
    int n,m,vi,wi,sum;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>vi>>wi;
        sum=vi*wi;
        for(int j=n;j>=0;j--)
        {
            if(j>=vi)
                dp[j]=max(dp[j],dp[j-vi]+sum);
        }
    }
    cout<<dp[n];
    return 0;
}