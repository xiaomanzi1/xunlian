#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,count,c;
    cin>>a>>b;
    count=a;
    x=a;
    while(x>b)
    {
        c=x/b;
        count+=c;
        x=x%b;
        x+=c;
    }
    cout<<a+(a-1)/(b-1);
    return 0;
}