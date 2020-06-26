#include<bits/stdc++.h>
using namespace std;
long long int a,ara[200000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum,maxx,u,flag,j,r;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        sum=0;
        u=0;
        flag=0;
        r=0;
        for(j=0; j<a; j++)
        {
            cin>>ara[j];
            sum+=ara[j];
        }
        if(sum<=0)
        {
            flag=1;
        }
        for(j=0; j<a-1; j++)
        {
            u+=ara[j];
            if(u>=sum)
            {
                flag=1;
            }
            if(u<0)
            {
                u=0;
            }
        }
        u=0;
        for(j=1; j<a; j++)
        {
            u+=ara[j];
            if(u>=sum)
            {
                flag=1;
            }
            if(u<0)
            {
                u=0;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }

}