#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    string n;
    getline(cin, n);

    for(int i=0;i<n.length();i++)
    {
        
        if(n[i]==' ') sum+=1;
        if(n[i]>='a'&&n[i]<='z')   sum+=a[n[i]-97];
    }
    cout<<sum;
    return 0;
}