#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>tp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    int n,cou=0,maxx=-1,cp=-1,i;
    cin>>n;
    int ara[n];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i-1];
        if(mp[ara[i-1]]==0)
        {
            mp[ara[i-1]]++;
            cp=max(cp,mp[ara[i-1]]);
            tp[1]++;
            cou++;
        }
        else
        {
           tp[mp[ara[i-1]]]--;
           mp[ara[i-1]]++;
           tp[mp[ara[i-1]]]++;
           cp=max(cp, mp[ara[i-1]]);
        }
        if(cou==1)
        {
            maxx=max(maxx,i);
        }
        else if(cou==i)
        {
            maxx=max(maxx,i);
        }
        else if(tp[cp]==cou-1&&tp[1]==1)
        {
            maxx=max(maxx,i);
        }
        else if(tp[cp-1]==cou-1&&tp[cp]==1)
        {
            maxx=max(maxx,i);
        }
    }
    cout<<maxx<<"\n";
}