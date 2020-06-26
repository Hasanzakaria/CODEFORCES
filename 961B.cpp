#include<bits/stdc++.h>
using namespace std;
long long int fak[100010];
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,k=0,l=0,p,x;
    cin>>n>>m;
    long long int ara[n],tak[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>tak[i];
        if(tak[i])
        {
            k+=ara[i];
        }
    }
    if(tak[0]==0)
    {
        fak[0]=ara[0];
    }
    for(i=1; i<n; i++)
    {
        if(!tak[i])
        {
            fak[i]=fak[i-1]+ara[i];
        }
        else
        {
            fak[i]=fak[i-1];
        }
    }
    for(i=0;i<n;i++)
    {
        p=i+m-1;
        if(p<n)
        {
          if(i==0)
          {
              if(fak[p]>l)
              {
                  l=fak[p];
              }
          }
          else
          {
              if((fak[p]-fak[i-1])>l)
              {
                  l=fak[p]-fak[i-1];
              }
          }
        }
    }
    cout<<k+l<<endl;
}