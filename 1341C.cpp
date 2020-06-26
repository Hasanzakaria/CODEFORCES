#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp,ans;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,l,f,e,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=j+1;
        }
        for(j=1;j<=a;j++)
        {
            l=mp[j];
            e=j;
            for(f=l;f<=a;f++)
            {
                if(cp[f]==1)
                {
                    break;
                }
                ans[f]=e;
                e++;
                cp[f]=1;
            }
        }
        for(j=0;j<a;j++)
        {
            if(ara[j]!=ans[j+1])
            {
               flag=1;
            }
        }
        if(flag)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
        mp.clear();
        cp.clear();
        ans.clear();
    }
}