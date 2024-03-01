#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200][200]={0},c[40000]={0},temp=0,ans=0,i=0,x=0;
    string b;
    cin>>n;
    cin>>b;
    for(int i=0;i<b.length();i++)
    {
        for(int j=0;j<b[i];j++)
        {
            x=i+2;
            if(x%2==1) c[ans]=1;
            else c[ans]=0;
            ans++;
        }
        
    }
    /*while(i<n*n)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                a[j][k]=c[i];
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
            if(j==n-1)
            {
                cout<<endl;
            }
        }
    }*/
    for(int i=0;i<n*n;i++)
    {
        cout<<c[i];
    }
    return 0;
}