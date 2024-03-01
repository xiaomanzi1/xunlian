#include<bits/stdc++.h>
using namespace std;
int dp[10][10]={0};
int main()
{
    int n;
    cin >> n;
    n++;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1||j==1)
            {
                dp[i][j]=1;
            }
            if(i>=2&&j>=2)dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    int max=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(dp[i][j]>max) max=dp[i][j];
        }
    }
    cout<<max;
    //cout<<dp[n-1][n-1];
    return 0;
}