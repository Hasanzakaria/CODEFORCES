#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,r,t,flag=0,u;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]<maxx)
        {
            r=i;
            flag=1;
            break;
        }
        u=a[i];
        maxx=max(maxx,u);
        if(maxx==a[i])
        {
           t=i;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
        cout<<t+1<<" "<<r+1<<"\n";
    }
    else
    {
        cout<<"NO\n";
    }
}