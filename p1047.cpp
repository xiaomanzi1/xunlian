#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n,x,y,count=0;
    cin>>l;
    int a[l];
    for(int i=0;i<=l;i++)
    {
        a[i]=1;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            a[i]=0;
        }
    }
    for(int i=0;i<=l;i++)

    {
        if(a[i]==1){
            count++;
                }
    }
    cout<<count;
        return 0;
}