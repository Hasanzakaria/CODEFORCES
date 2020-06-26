#include<bits/stdc++.h>
using namespace std;
long long int cou[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,flag=0,ans=-1;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        maxx=max(maxx,ara[i]);
        cou[ara[i]]++;
    }
    for(i=1;i<maxx;i++)
    {
        if(cou[i+1]>cou[i])
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=1;i<=maxx;i++)
        {
           ans=max(ans,cou[i]);
        }
        cout<<ans<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<cou[ara[i]]<<" ";
            cou[ara[i]]--;
        }
    }
}