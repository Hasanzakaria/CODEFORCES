#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,cou=1,t=1,u=0,f;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    f=n-1;
    k=ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i]==k)
        {
           cou++;
           u=i;
        }
        else
        {
            break;
        }
    }
    k=ara[n-1];
    for(i=n-2;i>=0;i--)
    {
       if(ara[i]==k)
        {
           t++;
           f=i;
        }
        else
        {
            break;
        }
    }
    if(cou>t)
    {
       cout<<n-cou<<"\n";
       for(i=u;i<n-1;i++)
       {
           if(ara[i]>ara[i+1])
           {
               cout<<1<<" "<<i+1+1<<" "<<i+1<<"\n";
           }
           else
           {
               cout<<2<<" "<<i+1+1<<" "<<i+1<<"\n";
           }
       }
    }
    else
    {
       cout<<n-t<<"\n";
       for(i=f;i>0;i--)
       {
           if(ara[i]>ara[i-1])
           {
                cout<<1<<" "<<i-1+1<<" "<<i+1<<"\n";
           }
           else
           {
               cout<<2<<" "<<i-1+1<<" "<<i+1<<"\n";
           }

       }
    }

}