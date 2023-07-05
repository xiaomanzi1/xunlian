#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    double sum=0.0;
    cin>>k;
    for(n=1;;n++)
    {
        sum+=1.0/n;
        if(sum>k*1.0) break;
    }
    cout<<n;

}