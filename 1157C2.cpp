#include<bits/stdc++.h>
using namespace std;
vector<char>v;
vector<char>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,f=0;
    cin>>n;
    long long int ara[n],j=0,k=n-1,minn,maxx,t,r,cou1,cou2;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    while(j<=k)
    {
      minn=min(ara[j],ara[k]);
      maxx=max(ara[j],ara[k]);
      if(minn>f)
      {
          f=minn;
          if(minn==ara[j]&&minn==ara[k])
          {
             t=j+1;
             r=f;
             cou1=0;
             cou2=0;
             while(ara[t]>r&&t<=k)
             {
                 r=ara[t];
                 t++;
                 cou1++;
             }
             t=k-1;
             r=f;
             while(ara[t]>r&&t>=j)
             {
                 r=ara[t];
                 t--;
                 cou2++;
             }
             if(cou1>cou2)
             {
                 v.push_back('L');
                 for(i=1;i<=cou1;i++)
                 {
                     v.push_back('L');
                 }
             }
             else
             {
                 v.push_back('R');
                for(i=1;i<=cou2;i++)
                 {
                     v.push_back('R');
                 }
             }
             break;
          }
          else if(minn==ara[j])
          {
              v.push_back('L');
              j++;
          }
          else
          {
              v.push_back('R');
              k--;
          }
      }
      else if(maxx>f)
      {
          f=maxx;
          if(maxx==ara[j])
          {
              v.push_back('L');
              j++;
          }
          else
          {
              v.push_back('R');
              k--;
          }
      }
      else
      {
          break;
      }
    }
    cout<<v.size()<<"\n";
    for(l=v.begin();l!=v.end();l++)
    {
        cout<<*l;
    }

}