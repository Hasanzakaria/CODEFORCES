#include<bits/stdc++.h>
using namespace std;
vector<int>v[51];
vector<int>::iterator l,q,w;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,j,t,y,flag=0,z,x;
    map<int,int>mp;
    char ch;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>ch;
            if(ch=='#')
            {
               v[i].push_back(j);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(l=v[i].begin();l!=v[i].end();l++)
        {
           t=*l;
           if(mp[t]!=0)
           {
               int o=0;
               y=mp[t];
               if(v[y].size()==v[i].size())
               {
                   q=v[y].begin();
                   w=v[i].begin();
                   while(o!=v[y].size())
                   {
                       z=*q;
                       x=*w;
                       if(z!=x)
                       {
                           flag=1;
                       }
                       q++;
                       w++;
                       o++;
                   }
               }
               else
               {
                   flag=1;
               }
           }
           else
           {
               mp[t]=i;
           }
        }
    }
    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}