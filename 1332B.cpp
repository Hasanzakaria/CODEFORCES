#include<bits/stdc++.h>
using namespace std;
long long int check[]={2,3,5,7,11,13,17,19,23,29,31};
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,anss;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        anss=0;
        cin>>a;
        long long int ara[a],ans[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            for(k=0;k<11;k++)
            {
                if(ara[j]%check[k]==0)
                {
                    if(mp[check[k]]==0)
                    {
                       anss++;
                       mp[check[k]]=anss;
                    }
                    ans[j]=mp[check[k]];
                    break;
                }
            }
        }
        cout<<anss<<"\n";
        for(j=0;j<a;j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<"\n";
        mp.clear();
    }

}