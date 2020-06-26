#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<int,string>cp;
map<int,int>tp;
int parent[2001];
int findd(int r)
{
    if(parent[r]==r)
    {
        return r;
    }
    parent[r]=findd(parent[r]);
    return parent[r];
}
int main ()
{
    int n,i,k=1,r,t,s,d,cou=0,p,ii;
    cin>>n;
    string a[2*n];
    for(i=1;i<=2*n;i++)
    {
       cin>>a[i-1];
       if(mp[a[i-1]]==0)
       {
         mp[a[i-1]]=k;
         cp[k]=a[i-1];
         k++;
       }
    }
    for(i=1;i<k;i++)
    {
        parent[i]=i;
    }
    for(i=1;i<=2*n;i+=2)
    {
        r=mp[a[i-1]];
        t=mp[a[i]];
        s=findd(r);
        d=findd(t);
        if(s!=d)
        {
            parent[s]=d;
        }
    }
    for(i=1;i<k;i++)
    {
        s=findd(i);
        if(tp[s]==0)
        {
            tp[s]=1;
            cou++;
        }
    }
    cout<<cou<<endl;
    for(i=0;i<2*n;i+=2)
    {
      p=mp[a[i]];
      ii=parent[p];
      if(tp[ii]==1)
      {
          tp[ii]=0;
          cout<<a[i]<<" "<<cp[ii]<<endl;
      }
    }
}