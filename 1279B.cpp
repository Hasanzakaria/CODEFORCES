#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,sum,maxx,e;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        sum=0;
        maxx=-1;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            sum+=ara[j];
            if(ara[j]>maxx)
            {
                maxx=ara[j];
                e=j+1;
            }
            if(sum>b)
            {
                break;
            }
        }
        if(sum<=b)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<e<<"\n";
        }

    }

}