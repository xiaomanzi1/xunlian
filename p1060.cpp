#include<bits/stdc++.h>
using namespace std;
int dp[30][100000];
int main()
{
    int n,m,vi,wi,sum;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>vi>>wi;
        sum=vi*wi;
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=vi)
                dp[i][j]=max(dp[i][j],dp[i-1][j-vi]+sum);
        }
    }
    cout<<dp[m][n];
    return 0;
}