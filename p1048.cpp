#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main()
{
    int ti[1005],price[1005];
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>ti[i]>>price[i];
        for(int j=1;j<=t;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>ti[i]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-ti[i]]+price[i]);
            }
        }
    }
    cout<<dp[m][t];
    return 0;
}