#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,u,flag;
    string a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a>>b;
        k=a.size();
        for(j=0;j<k;j++)
        {
            u=a[j]-'a';
            mp[u]=1;
        }
        for(j=0;j<k;j++)
        {
            u=b[j]-'a';
            if(mp[u]==1)
            {
               flag=1;
               break;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        mp.clear();
    }

}