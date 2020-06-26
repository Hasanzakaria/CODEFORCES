#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    stack<int>pq;
    queue<int>pos,sos;
    int k,i,j,flag=0,m,n,f,tt=0,l,p;
    string a,b;
    cin>>a;
    k=a.size();
    unsigned long long hashh[k+1],power[k+1],t,d;
    hashh[0]=0;
    power[0]=1;
    for(i=1; i<=k; i++)
    {
        power[i]=power[i-1]*3797;
    }
    for(i=1; i<=k; i++)
    {
        hashh[i]=hashh[i-1]*3797+a[i-1];
    }
    for(i=1,j=k; i<k-1&&j>2; i++,j--)
    {
        t=hashh[k]-(hashh[j-1]*power[k-j+1]);
        if(hashh[i]==t)
        {
            flag=1;
            f=j-1;
            pq.push(f);
        }
    }
    for(i=1;i<k;i++)
    {
        if(a[0]==a[i])
        {
            pos.push(i);
        }
    }
    if(flag==0)
    {
        cout<<"Just a legend"<<endl;
    }
    else
    {
      sos=pos;
      while(!pq.empty())
      {
          f=pq.top();
          n=f;
          pq.pop();
          flag=0;
          pos=sos;
          while(!pos.empty())
          {
              f=n;
              m=pos.front();
              pos.pop();
              l=m+(k-f-1);
              if(m>=1&&l<k-1)
              {
                  d=hashh[l+1]-(hashh[m]*power[l-m+1]);
                  if(hashh[k-f]==d)
                  {
                      tt=1;
                      goto dhaka;
                  }
              }

          }
      }
      dhaka:;
      if(tt==0)
      {
          cout<<"Just a legend"<<endl;
      }
      else
      {
          for(i=n;i<k;i++)
          {
              cout<<a[i];
          }
      }

    }

}