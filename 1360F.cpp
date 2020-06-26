#include<bits/stdc++.h>
using namespace std;
vector<string>v,x;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,m,n,j,l,k,f,u,ans;
    string s,p,r,finall;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m>>n;
        ans=-1;
        for(j=1;j<=m;j++)
        {
            cin>>s;
            v.push_back(s);
        }
        p=v[0];
        for(j=0;j<n;j++)
        {
            r=p;
            for(l=0;l<26;l++)
            {
                ch='a'+l;
                r[j]=ch;
                x.push_back(r);
            }
        }
        for(j=0;j<x.size();j++)
        {
           u=0;
           for(l=0;l<v.size();l++)
           {
               f=0;
               for(k=0;k<n;k++)
               {
                   if(v[l][k]!=x[j][k])
                   {
                     f++;
                   }
               }
               if(f>1)
               {
                  u=1;
               }
           }
           if(u==0)
           {
               ans=0;
               finall=x[j];
           }
        }
        if(ans==-1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<finall<<"\n";
        }
        v.clear();
        x.clear();

    }
}