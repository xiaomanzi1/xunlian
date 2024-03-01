#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,a[100][100]={0},x1,y1,x2,y2;
    cin>>n>>m>>x>>y;
    for(int i=0;i<x;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<=x2;j++)
        {
            for(int k=y1;k<=y2;k++)
            {
                a[j][k]++;
            }
        }
    }
    for(int i=0;i<y;i++)
    {
        cin>>x1>>y1;
        if(a[x1][y1]==0)
        {
            cout<<'N';
        }
        else cout<<'Y'<<' '<<a[x1][y1]<<' '<<a[x1][y1];
        cout<<endl;
    }
   
    return 0;
}