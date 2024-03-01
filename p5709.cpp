#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if((a-ceil(c/b))>0)
        cout<<a-ceil(c/b);
    else cout<<"0";
    return 0;
}