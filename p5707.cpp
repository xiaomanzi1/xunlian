#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,s,v;
    int h=7,m=50;
    cin>>s>>v;
    x=ceil(s/v);
    //cout<<x<<endl;
    m-=x;
    while(m<0){
        h-=1;
        m+=60;
    }
    if(h<0) h+=24;
    if(h<10)
    {
        if(m<10) cout<<"0"<<h<<":"<<"0"<<m;
        else cout<<"0"<<h<<":"<<m;
    }
    else{
        if(m<10) cout<<h<<":"<<"0"<<m;
        else cout<<h<<":"<<m;
    }
    return 0;
}