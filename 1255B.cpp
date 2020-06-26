#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        sum=0;
        pair<long long int,long long int>ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j].first;
            ara[j].second=j+1;
            sum+=ara[j].first;
        }
        sort(ara,ara+a);
        if(a==2)
        {
            cout<<-1<<"\n";
        }
        else if(b>=a)
        {
            sum*=2;
            sum+=(b-a)*(ara[0].first+ara[1].first);
            cout<<sum<<"\n";
            for(j=1;j<a;j++)
            {
                cout<<j<<" "<<j+1<<"\n";
            }
            cout<<a<<" "<<1<<"\n";
            for(j=1;j<=(b-a);j++)
            {
                cout<<ara[0].second<<" "<<ara[1].second<<"\n";
            }
        }
        else
        {
            cout<<-1<<"\n";
        }

    }


}