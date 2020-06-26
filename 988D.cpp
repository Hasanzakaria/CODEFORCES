#include<bits/stdc++.h>
using namespace std;
set<long long int>s;
set<long long int>::iterator u,uu;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,f,j,e,flag=0,l,r;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        s.insert(ara[i]);
    }
    for(i=0;i<n;i++)
    {
        f=ara[i];
        j=1;
        e=1;
        while(j<=36)
        {
            l=f-e;
            r=f+e;
            u=s.find(l);
            uu=s.find(r);
            if(u!=s.end()&&uu!=s.end())
            {
                v.push_back(f-e);
                v.push_back(f);
                v.push_back(f+e);
                flag=1;
                break;
            }
            e*=2;
            j++;
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
       for(i=0;i<n;i++)
       {
           f=ara[i];
           e=1;
           j=1;
           while(j<=36)
           {
               l=f+e;
               u=s.find(l);
               if(u!=s.end())
               {
                  v.push_back(f);
                  v.push_back(f+e);
                  flag=1;
                  break;
               }
               e*=2;
               j++;
           }
           if(flag==1)
           {
               break;
           }
       }
       if(flag==0)
       {
           cout<<1<<"\n";
           cout<<ara[0]<<"\n";
       }
       else
       {
           cout<<2<<"\n";
           cout<<v[0]<<" "<<v[1]<<"\n";
       }
    }
    else
    {
        cout<<3<<"\n";
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
}