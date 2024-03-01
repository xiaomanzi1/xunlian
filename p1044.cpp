#include<bits/stdc++.h>
using namespace std;
long long dp[20][20];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        dp[i][0] =1;
    }
    for(int j=1;j<=n;j++)
       for(int i=0;i<=n;i++)
        {
          if(i>=1) 
            dp[i][j]=dp[i-1][j]+dp[i+1][j-1];
          if(i==0)//栈内没有东西
            dp[i][j]=dp[i+1][j-1];
        }
        cout<<dp[0][n];
    return 0;
}