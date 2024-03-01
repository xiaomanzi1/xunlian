#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m,a[2005][2005],dp[2005][2005],minn=99999;
    cin >> n >> m;
    for( i=1;i<=m;i++)
    {
        for( j=1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        dp[0][i-1]=dp[m][i-1];
        for( j=1;j<=m;j++)
        {
            dp[j][i] =min(dp[j-1][i-1],dp[j][i-1])+a[j][i];
        }
    }
    for( i=1;i<=m;i++)
    {
        minn=min(minn,dp[i][n]);
    }
    cout <<minn;
    return 0;
}