#include<bits/stdc++.h>
using namespace std;
map<int,int>mp,cp;
vector<int>v;
vector<int>::iterator g;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,ans=0,l;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]=mp[ara[i]-1]+1;
        cp[ara[i]]=i+1;
    }
    for(i=0;i<n;i++)
    {
       if(mp[ara[i]]>ans)
       {
           ans=mp[ara[i]];
           l=ara[i];
       }
    }
    for(i=n-1;i>=0;i--)
    {
        if(ara[i]==l)
        {
            v.push_back(i+1);
            l--;
        }
    }
    cout<<ans<<endl;
    for(g=v.end()-1;g!=v.begin()-1;g--)
    {
        cout<<*g<<" ";
    }
}