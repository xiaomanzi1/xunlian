#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=1,j=1,i=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   sort(a,a+n);
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            b[j]=a[i];
            j++;
            m++;
        }
        else{
            b[j]=0;
            j++;
        }
    }
    cout<<m<<endl;
    for(i=0;i<n;i+=0){
        if(b[i]!=0){
            cout<<b[i]<<" ";
            i++;
        }
        else{
            i++;
        }
    }
}