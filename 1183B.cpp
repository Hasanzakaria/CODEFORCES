#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int q,i,n,k,j,t,f;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n>>k;
        long long int ara[n];
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+n);
        t=ara[0]+k;
        if(t>0)
        {
            f=abs(ara[n-1]-t);
            if(f<=k)
            {
                cout<<t<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
        else
        {
            cout<<-1<<"\n";
        }
    }

}