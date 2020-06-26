#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,sum=0,t,l,flag=0;
    cin>>m>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum<m)
    {
        cout<<-1<<"\n";
    }
    else
    {
       cout<<1<<" ";
       l=m-ara[0];
       mp[1]=1;
       mp[ara[0]+1]=1;
       t=1;
       for(i=1;i<n;i++)
       {
           if(l==ara[i]&flag==0)
           {
               cout<<ara[0]+1<<" ";
               flag=1;
           }
           else
           {
             while(mp[t]==1)
             {
                 t++;
             }
             cout<<t<<" ";
             mp[t]=1;
           }
       }

    }

}