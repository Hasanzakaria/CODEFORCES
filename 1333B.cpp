#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,flag1,flag2,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        flag1=0;
        flag2=0;
        cin>>a;
        long long int ara[a],ara1[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            cin>>ara1[j];
        }
        for(j=0;j<a;j++)
        {
            if(ara1[j]>ara[j])
            {
                if(flag1==0)
                {
                   ans=1;
                }
            }
            else if(ara1[j]<ara[j])
            {
                if(flag2==0)
                {
                    ans=1;
                }
            }
            if(ara[j]==1)
            {
                flag1=1;
            }
            else if(ara[j]==-1)
            {
                flag2=1;
            }
        }
        if(ans==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}