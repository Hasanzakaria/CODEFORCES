#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,k,l,i;
    cin>>n>>m;
    k=(n+1)*2;
    if(n>(m+1)||m>k)
    {
        cout<<-1<<endl;
    }
    else if(n==m+1)
    {
        for(i=1;i<=m;i++)
        {
            cout<<0<<1;
        }
        cout<<0<<endl;
    }
    else
    {
        l=m-n;
        for(i=1;i<=n;i++)
        {
            if(l>0)
            {
                cout<<1;
                l--;
            }
            cout<<1<<0;
        }
        if(l==2)
        {
            cout<<11<<endl;
        }
        else if(l==1)
        {
            cout<<1<<endl;
        }

    }
}