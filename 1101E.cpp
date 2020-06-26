#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,t,r,f=-1,g=-1;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ch>>a>>b;
        if(ch=='+')
        {
           t=max(a,b);
           r=min(a,b);
           g=max(g,t);
           f=max(f,r);
        }
        else
        {
            t=max(a,b);
            r=min(a,b);
            if(r>=f&&t>=g)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }

}