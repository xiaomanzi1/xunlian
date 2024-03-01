#include<stdio.h>
int n,m,A[101],F[10001],count,max; 
int main(void)
{
    int i,j;
    F[0]=1;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)scanf("%d",&A[i]);
    for(i=1;i<=n;i++)
        for(j=m;j>=A[i];j--)
            F[j]+=F[j-A[i]];
    printf("%d",F[m]);
    return 0;