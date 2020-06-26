#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,d,a,b,c,j,flag,cou,ff;
    string s,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       flag=0;
       cou=0;
       cin>>d;
       cin>>a>>b>>c;
       cin>>s;
       ff=ceil(d/2.0);
       for(j=0;j<d;j++)
       {
           if(s[j]=='R')
           {
               if(b>0)
               {
                   r+='P';
                   b--;
                   cou++;
               }
               else
               {
                  v.push_back(j);
                  r+='R';
               }
           }
           else if(s[j]=='P')
           {
               if(c>0)
               {
                   r+='S';
                   c--;
                   cou++;
               }
               else
               {
                  v.push_back(j);
                  r+='R';
               }
           }
           else
           {
               if(a>0)
               {
                   r+='R';
                   a--;
                   cou++;
               }
               else
               {
                  v.push_back(j);
                  r+='R';
               }
           }
       }
       if(cou<ff)
       {
           cout<<"NO\n";
       }
       else
       {
           for(j=0;j<v.size();j++)
           {
               if(a>0)
               {
                  r[v[j]]='R';
                  a--;
               }
               else if(b>0)
               {
                   r[v[j]]='P';
                   b--;
               }
               else if(c>0)
               {
                   r[v[j]]='S';
                   c--;
               }
               else
               {
                   flag=1;
               }
           }
           if(flag==0)
           {
               cout<<"YES\n";
               cout<<r<<"\n";
           }
           else
           {
               cout<<"NO\n";
           }
       }
       r.clear();
       v.clear();

    }


}