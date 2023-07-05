#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,x;
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<10;i++)
    {
        if(a[i]<=x+30) count++;
    }
    cout<<count;
    return 0;
}