#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[13]={0};
   int x=0,count=0,y=300;
   for(int i = 1; i < 13; i++)
   {
       cin>>a[i];
   }
   x=y-a[1];
   for(int i = 2; i < 13; i++)
   {
    x+=y-a[i];
    if(x>=0){
        if(x/100>0)
        {
            count+=x/100;
            x%=100;
        }
            }
    else{
        cout<<"-"<<i;
        return 0;
    }
   }
   count*=120;
   count+=x;
   cout<<count;
    return 0;
}