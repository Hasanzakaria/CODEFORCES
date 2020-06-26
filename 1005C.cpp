#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k=1,w,o,flag,t=0;
    for(i=1;i<=40;i++)
    {
        k=k*2;
        v.push_back(k);
    }
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(l=v.begin();l!=v.end();l++)
        {
           w=*l;
           if(w>ara[i])
           {
             o=w-ara[i];
             if(o==ara[i])
             {
                 if(mp[o]>1)
                 {
                   flag=1;
                 }
             }
             else
             {
                 if(mp[o]!=0)
                 {
                     flag=1;
                 }
             }
           }
        }
        if(flag==0)
        {
           t++;
        }
    }
    cout<<t<<endl;
}