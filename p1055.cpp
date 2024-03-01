#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int sum=0,j=1;
    for(int i=0; i<len-1; i++)
    {   
        if(str[i]>='0' && str[i]<='9')
        { 
            sum+=(str[i]-48)*j;
            j++;
            }
            
    }
    
    if(sum%11==str[len-1]-48)
        {
            cout<<"Right";
        
        }
    else{
        
        for(int i=0; i<len-1; i++)
        {
            cout<<str[i];
        }
        cout<<sum%11;}
    return 0;
}