#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,flag=0,t,i=2,f,u,j,x,y,r1,r2;
    cin>>n;
    t=sqrt(n);
    while(i<=t)
    {
        if(n%i==0)
        {
           f=n/i;
           u=__gcd(f,i);
           if(u==1)
           {
               v.push_back(make_pair(i,f));
           }
        }
        i++;
    }
    pair<long long int,long long int>pq;
    for(i=0;i<v.size();i++)
    {
        pq=v[i];
        for(j=1;j<pq.first;j++)
        {
           x=pq.second*j;
           y=n-1-x;
           if(y%pq.first==0)
           {
               r1=y/pq.first;
               r2=j;
               flag=1;
               break;
           }
        }
        if(flag)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<2<<"\n";
        cout<<r1<<" "<<pq.second<<"\n";
        cout<<r2<<" "<<pq.first<<"\n";
    }

}