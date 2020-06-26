#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,flag=0,l;
    cin>>n;
    long long int ara[n];
    pair<long long int,long long int>t[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        t[i].first=ara[i];
        t[i].second=i+1;
    }
    pair<long long int,long long int>pq[n-1];
    sort(ara,ara+n);
    sort(t,t+n);
    k=ara[2]-ara[1];
    for(i=2;i<n-1;i++)
    {
        if(ara[i+1]-ara[i]!=k)
        {
           flag=1;
        }
    }
    if(flag==0)
    {
        cout<<t[0].second<<"\n";
    }
    else
    {
        flag=0;
        k=ara[n-2]-ara[n-3];
        for(i=n-2;i>0;i--)
        {
            if(ara[i]-ara[i-1]!=k)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<t[n-1].second<<"\n";
        }
        else
        {
           for(i=0;i<n-1;i++)
           {
               pq[i].first=t[i+1].first-t[i].first;
               pq[i].second=i+1;
           }
           sort(pq,pq+n-1);
           l=pq[0].first+pq[1].first;
           flag=0;
           for(i=2;i<n-1;i++)
           {
               if(pq[i].first!=l)
               {
                  flag=1;
               }
           }
           if(flag==0&&(pq[1].second==pq[0].second+1)||(pq[1].second+1==pq[0].second))
           {
               l=pq[2].first;
               for(i=0;i<n-1;i++)
               {
                   if(t[i+1].first-t[i].first!=l)
                   {
                       cout<<t[i+1].second<<"\n";
                       break;
                   }
               }
           }
           else
           {
               cout<<-1<<"\n";
           }

        }
    }


}