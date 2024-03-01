#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int top,a[1000];
    void inti(){top=0;}
    void push(int i){a[++top]=i;}
    void pop(){if(top) top--;}
    int empty(){if(top>0) return 0;else return 1;};
    int quary(){return a[top];}
}r;
int main()
{
    char n;
    r.inti();
    while(cin>>n)
    {
        if(r.empty()) 
        {
            if(n==')')
            {
                cout<<"NO";
                return 0;
            }
        }
        if (n=='(') r.push(n);
        if (n==')') r.pop(); 
    }
    if(r.empty()) cout<<"YES";
    else cout<<"NO";
    return 0;
}