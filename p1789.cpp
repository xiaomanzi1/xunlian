#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a[105][105]={0},ans=0,x,y;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        for(int j=x-1;j<=x+1;j++)
			for(int k=y-1;k<=y+1;k++)
				a[j][k]=1;
		a[x-2][y]=1,a[x+2][y]=1,a[x][y-2]=1,a[x][y+2]=1;
	}
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y;//输入萤石的坐标 
		for(int j=x-2;j<=x+2;j++)
			for(int k=y-2;k<=y+2;k++)
				a[j][k]=1;
	}
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]==0)	ans++;
	cout<<ans<<endl;
    
    return 0;
}