#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c,count=0;
    cin>>x;
    for(int i=10000;i<=30000;i++)
    {
        a=i/100;
        b=i/10;
        b-=b/1000*1000;
        c=i-i/1000*1000;
        if((a%x == 0)&&(b%x == 0)&&(c%x == 0))
        {
            cout<<i<<endl;
            count=1;
        }
    }
    if(count==0) cout<<"NO";
    return 0;
}