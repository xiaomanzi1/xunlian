#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,b,num=0;
    double x=10,a;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>b;
        x=min(x-a,10.0);
        if(x<=0){
            break;
        }
        num+=b;
    }
    while(num>=0)
    {
        num-=pow(2,d);
        if(num<0)
        {
            num+=pow(2,d);
            cout<<d<<" "<<num;
            break;
        }
        else
        d++;
    }
    
}