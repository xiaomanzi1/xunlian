#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a=0,max=0,count=0,i=0;
    while(i<7)
    {
        cin>>x>>y;
        count=x+y;
        if(count>max&&count>8)
        {
            max=count;
            a=i+1;
            i++;
        }
        else i++;
    }
    cout<<a;
    return 0;
}