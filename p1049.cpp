#include<bits/stdc++.h>
using namespace std;
int dp[20010];
int main()
{
    int v,n;
    int a[31];
    cin>>v>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=v;j>=a[i];j--){                            
            if(dp[j]<dp[j-a[i]]+a[i]){
                dp[j]=dp[j-a[i]]+a[i];
            }
        }
    }
    cout<<v-dp[v];
    return 0;
}