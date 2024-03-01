#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,x2,y1,y2,a=pow(2,31)-1,b=-pow(2,31);
    long long answer,x,y;
    cin >> x1 >> x2 >> y1 >> y2;
    answer=max(x2*y2,x1*y1);
    x=min(x2*y1,x1*y1);
    //if(answer<(long long)a||x>(long long)b) cout<<"int";
    //else cout<<"long long int";
    cout<<answer<<endl<<x;
    return 0;
}