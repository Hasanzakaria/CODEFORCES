#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
vector<long long int>even,odd;
long long int ara[100],n;
long long int dip[100][2][100][100];
long long int dp(long long int pos,long long int previous,long long int i,long long j)
{
    if(pos==n)
    {
        return 0;
    }
    if(dip[pos][previous][i][j]!=-1)
    {
        return dip[pos][previous][i][j];
    }
    long long int k=10000,l=10000;
    if(pos==0)
    {
        if(ara[pos]==0)
        {
            if(i<even.size())
            {
                k=dp(pos+1,even[i]%2,i+1,j);
            }
            if(j<odd.size())
            {
                l=dp(pos+1,odd[j]%2,i,j+1);
            }
        }
        else
        {
            k=dp(pos+1,ara[pos]%2,i,j);
        }
    }
    else
    {
        if(ara[pos]==0)
        {
            if(i<even.size())
            {
                if((even[i]%2)!=(previous%2))
                {
                    k=1+dp(pos+1,even[i]%2,i+1,j);
                }
                else
                {
                    k=dp(pos+1,even[i]%2,i+1,j);
                }
            }
            if(j<odd.size())
            {
                if((odd[j]%2)!=(previous%2))
                {
                    l=1+dp(pos+1,odd[j]%2,i,j+1);
                }
                else
                {
                    l=dp(pos+1,odd[j]%2,i,j+1);
                }
            }
        }
        else
        {
            if((ara[pos]%2)!=(previous%2))
            {
                k=1+dp(pos+1,ara[pos]%2,i,j);
            }
            else
            {
                k=dp(pos+1,ara[pos]%2,i,j);
            }
        }
    }
    dip[pos][previous][i][j]=min(k,l);
    return dip[pos][previous][i][j];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mp[ara[i]]=1;;
    }
    for(i=1; i<=n; i++)
    {
        if(mp[i]==0)
        {
            if(i%2==0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
    }
    memset(dip,-1,sizeof(dip));
    k=dp(0,0,0,0);
    cout<<k<<"\n";
}