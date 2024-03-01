#include<bits/stdc++.h>
using namespace std;
int f[10000];
struct goods{
    int piece,price,number,value;
    char name[101];
}p [1345];
int cmn(goods a,goods b){
	return a.value>b.value;//返回价值大的，就算重复加的也是一样大，所以一句就够了 
}
int m,n; 
int main(){
    cin>>m>>n;
    m=21-m;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>p[i].piece>>p[i].price>>p[i].number>>p[i].name;
        for(int j=1;j<=n;j++){
            if(i!=j&&strcmp(p[i].name,p[j].name)==0){
                if(p[j].piece+p[i].piece<=p[j].number){
                    p[j].piece+=p[i].piece;
                    n--;
                    i--;
                    break;
                }
                else {
                    p[i].piece=p[i].piece-(p[j].number-p[j].piece);
                    p[j].piece=p[j].number;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        p[i].value=p[i].piece*p[i].price;
    }
	sort(p+1,p+n+1,cmn);//将价值大的排在前面 
	int s=0;//记录最大值 
	for(int i=1;i<=m;i++){
		s+=p[i].value;//前m个的价值都加上就是他的总和 
	}
	cout<<s;
    return 0;
} 