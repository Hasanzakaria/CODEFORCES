#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,maxx=-1,minn=100000000000,sum=0,l,f,flag=0;
    cin>>n>>m;
    long long int ara[n];
    f=m-1;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=(ara[i]*m);
        maxx=max(maxx,ara[i]);
    }
    long long int jak[m];
    for(i=0;i<m;i++)
    {
        cin>>jak[i];
        minn=min(minn,jak[i]);
    }
    if(minn>=maxx)
    {
       sort(ara,ara+n);
       sort(jak,jak+m);
       l=n-1;
       for(i=0;i<m;i++)
       {
          if(jak[i]-ara[l]==0)
          {
              if(flag==0)
              {
                  flag=1;
              }
              else
              {
                  f--;
                  if(f==0)
                  {
                      l--;
                      f=m-1;
                  }
              }
              continue;
          }
          if(f>0)
          {
             sum+=(jak[i]-ara[l]);
             f--;
          }
          if(f==0)
          {
              f=m-1;
              l--;
          }

       }
       cout<<sum<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
}