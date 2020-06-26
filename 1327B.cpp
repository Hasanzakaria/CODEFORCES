#include<bits/stdc++.h>
using namespace std;
set<long long int>s,p;
set<long long int>::iterator u;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,j,k,l,t,e,r,ans;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        ans=-1;
        cin>>a;
        for(j=1;j<=a;j++)
        {
            s.insert(j);
        }
        for(j=1;j<=a;j++)
        {
            cin>>k;
            for(l=1;l<=k;l++)
            {
               cin>>t;
               u=s.find(t);
               if(u!=s.end())
               {
                   p.insert(t);
               }
            }
            if(p.size()==0)
            {
               ans=j;
            }
            else
            {
                u=p.begin();
                r=*u;
                u=s.find(r);
                s.erase(u);
            }
            p.clear();
        }
        if(ans==-1)
        {
            cout<<"OPTIMAL\n";
        }
        else
        {
            cout<<"IMPROVE\n";
            u=s.begin();
            cout<<ans<<" "<<*u<<"\n";
        }
        s.clear();

    }


}