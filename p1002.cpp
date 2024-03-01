#include<bits/stdc++.h>
using namespace std;
bool ma[25][25];
long long dp[25][25];
int main()
{
    dp[1][1]=1;
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    n++;
    m++;
    x++;
    y++;
    ma[x][y]=1;
    ma[x-2][y-1]=1;
	ma[x-2][y+1]=1;
	ma[x+2][y-1]=1;
	ma[x+2][y+1]=1;
	ma[x-1][y+2]=1;
	ma[x-1][y-2]=1;
	ma[x+1][y+2]=1;
	ma[x+1][y-2]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((i!=1||j!=1)&&!ma[i][j]) 
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[n][m];
    return 0;
}