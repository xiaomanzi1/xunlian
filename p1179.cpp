#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l, r,sum = 0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int num=i;
        while(num!=0)
        {
            if(num%10==2) {
                sum++;
            }
            num=num/10;
        }
    }
    cout<<sum;
    return 0;
}
