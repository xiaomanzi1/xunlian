#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,h,r,v;
    cin >> h >> r;
    h/=10;
    r/=10;
    v=3.14*r*r*h;
    x=ceil(20/v);
    cout << x ;
    return 0;
}