#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
long long int cp[1010];
vector<long long int>v;
vector<long long int>::iterator ll;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,l,f,flag,r,tt=0,p,u,e=0,o;
    cin>>n;
    o=n/2;
    o++;
    long long int jak[n+1][n+1];
    long long int ara[n];
    for(i=0; i<n*n; i++)
    {
        cin>>ara[i];
        if(mp[ara[i]]==0)
        {
            mp[ara[i]]=1;
            v.push_back(ara[i]);
        }
        cp[ara[i]]++;
    }
    for(i=1,j=n; i<j; i++,j--)
    {
        for(k=1,l=n; k<l; k++,l--)
        {
            flag=0;
            for(ll=v.begin(); ll!=v.end(); ll++)
            {
                f=*ll;
                if(cp[f]>=4)
                {
                    flag=1;
                    r=f;
                    cp[f]-=4;
                    break;
                }
            }
            if(flag==0)
            {
                tt=1;
            }
            else
            {
                jak[i][k]=r;
                jak[i][l]=r;
                jak[j][k]=r;
                jak[j][l]=r;
            }

        }
    }
    if(tt==1)
    {
        cout<<"NO\n";
    }
    else
    {
        if((n%2)==1)
        {
            for(u=1,p=n; u<p; u++,p--)
            {
                flag=0;
                for(ll=v.begin(); ll!=v.end(); ll++)
                {
                    f=*ll;
                    if(cp[f]>=2)
                    {
                        flag=1;
                        r=f;
                        cp[f]-=2;
                        break;
                    }
                }
                if(flag==0)
                {
                    tt=1;
                }
                else
                {
                    jak[o][u]=r;
                    jak[o][p]=r;
                }

            }
            for(u=1,p=n; u<p; u++,p--)
            {
                flag=0;
                for(ll=v.begin(); ll!=v.end(); ll++)
                {
                    f=*ll;
                    if(cp[f]>=2)
                    {
                        flag=1;
                        r=f;
                        cp[f]-=2;
                        break;
                    }
                }
                if(flag==0)
                {
                    tt=1;
                }
                else
                {
                    jak[u][o]=r;
                    jak[p][o]=r;
                }

            }
            for(ll=v.begin(); ll!=v.end(); ll++)
            {
                if(cp[*ll]>0)
                {
                    jak[o][o]=*ll;
                    e=1;
                    break;
                }
            }
            if(e==0)
            {
                tt=1;
            }
            if(tt==1)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=n; j++)
                    {
                        cout<<jak[i][j]<<" ";
                    }
                    cout<<"\n";
                }
            }
        }
        else
        {
            cout<<"YES\n";
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    cout<<jak[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
    }
}