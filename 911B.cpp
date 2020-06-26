#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,i,t,r,k,f=0;
    cin>>a>>b>>c;
    for(i=1;i<a;i++)
    {
        t=c/i;
        r=b/(a-i);
        k=min(t,r);
        f=max(f,k);
    }
    cout<<f<<endl;

}