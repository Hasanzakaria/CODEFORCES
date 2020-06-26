#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0,j,l,minn=10000;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
            cou++;
        }
    }
    if(cou>0)
    {
        cout<<n-cou<<"\n";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            l=ara[i];
            for(j=i+1;j<n;j++)
            {
                l=__gcd(l,ara[j]);
                if(l==1)
                {
                  minn=min(minn,j-i);
                  break;
                }
            }
        }
        if(minn!=10000)
        {
          cout<<minn+(n-1)<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
}