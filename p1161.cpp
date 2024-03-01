#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x;
    long long b[9999]={0};
    double a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>t;
        for(int j=1;j<=t;j++)
        {
            x=a*j;
            if(b[x]==0) b[x]=1;
            else b[x]=0;   
        }
    }
    for(int i=0;i<9999;i++){
        if(b[i]==1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}