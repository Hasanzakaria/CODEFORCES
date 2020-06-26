#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp[220];
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,x,y,cou=0,flag=0,i;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            x=a[i]-'a';
            y=b[i]-'a';
            if(mp[x][y]==0)
            {
                mp[x][y]=i+1;
            }
            else
            {
                v.push_back(make_pair(i+1,mp[x][y]));
                mp[x][y]=0;
                cou++;
            }
        }
    }
    if(mp[0][1]!=0&&mp[1][0]!=0)
    {
        cou+=2;
        v.push_back(make_pair(mp[0][1],mp[0][1]));
        v.push_back(make_pair(mp[0][1],mp[1][0]));
    }
    else if(mp[0][1]!=0)
    {
        flag=1;
    }
    else if(mp[1][0]!=0)
    {
        flag=1;
    }
    pair<long long int,long long int>pq;
    if(flag==0)
    {
       cout<<v.size()<<"\n";
       for(i=0;i<v.size();i++)
       {
           pq=v[i];
           cout<<pq.first<<" "<<pq.second<<"\n";
       }
    }
    else
    {
        cout<<-1<<"\n";
    }
}