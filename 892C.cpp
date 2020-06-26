#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,l=1000000000,flag=0,t,p=0,q=0,i;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]<l)
        {
            l=ara[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]%l!=0)
        {
            flag=1;
        }
        if(ara[i]==1)
        {
            q=1;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(q==1)
        {
            cout<<n-1;
        }
        else
        {
            p=1;
            for( ; ; )
            {
                for(i=0; i<n-1; i++)
                {
                    t=__gcd(ara[i],ara[i+1]);
                    if(t==1)
                    {
                        goto dhaka;
                    }
                    if(ara[i]<ara[i+1])
                    {
                        ara[i]=t;
                    }
                    else
                    {
                        ara[i+1]=t;
                    }
                }
                p++;
            }
            dhaka:;
            cout<<p+(n-1)<<endl;
        }

    }
}