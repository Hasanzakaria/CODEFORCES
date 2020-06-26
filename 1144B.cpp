#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,cou=0,l,t,p=0,sum=0,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            cou++;
        }
    }
    sort(ara,ara+n);
    l=n-cou;
    if(l==cou)
    {
        cout<<0<<"\n";
    }
    else
    {
        t=abs(l-cou);
        t--;
        if(cou>l)
        {
            for(i=0;i<n;i++)
            {
                if(p==t)
                {
                    break;
                }
                if(ara[i]%2==0)
                {
                   p++;
                   sum+=ara[i];
                }
            }
        }
        else
        {

            for(i=0;i<n;i++)
            {
                if(p==t)
                {
                    break;
                }
                if(ara[i]%2!=0)
                {
                   p++;
                   sum+=ara[i];
                }

            }
        }
        cout<<sum<<"\n";
    }

}