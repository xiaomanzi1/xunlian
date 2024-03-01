#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],b[1005]={0},x,i;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        x=a[i+1]-a[i];
        x=abs(x);
        b[x]=x;
    }
    for(int i=1;i<n;i++)
    {
        if(b[i]!=i) break;

    }
    if(i==n) cout<<"Jolly";
    else cout<<"Not jolly";
    return 0;
}