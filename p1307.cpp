#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ans=0,b,temp=0;
    cin>>a;
    b=abs(a);
        while(b>0)
        {
            temp=0;
            temp=b%10;
            ans+=temp;
            if(b>=10){
                ans*=10;
            }
            
            b=b/10;
        }
    if(a>=0) cout<<ans;
    else cout<<"-"<<ans;
    return 0;
}