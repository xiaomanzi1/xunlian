#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],min,max,gcd;
    for(int i = 0; i <3; i++){
        cin>>a[i];
    }
    sort(a,a+3);
    min=a[0];max=a[2];
    for(int i = min; i >=1; i--){
        if(min%i==0&&max%i==0)
        {
            gcd=i;
            break;
        }
    }
    min=min/gcd;max=max/gcd;
    cout<<min<<"/"<<max;
    return 0;
}