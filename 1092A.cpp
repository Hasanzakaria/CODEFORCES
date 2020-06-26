#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,m,l,j,f,t;
    string a,b;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m>>l;
        for(j=1;j<=l;j++)
        {
            ch=96+j;
            a=a+ch;
        }
        f=m/l;
        t=m%l;
        for(j=1;j<=f;j++)
        {
            b=b+a;
        }
        for(j=1;j<=t;j++)
        {
            ch=96+j;
            b=b+ch;
        }
        cout<<b<<endl;
        a.clear();
        b.clear();
    }
}