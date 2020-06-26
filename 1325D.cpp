#include<bits/stdc++.h>
using namespace std;
long long int ara[70],ara1[70];
void convert(long long int x)
{

    long long int p=0;
    while(x)
    {
        ara[p]=x%2;
        x/=2;
        p++;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,p,ans=0,ans1=0,i,t;
    cin>>n>>m;
    if(n>m)
    {
        cout<<-1<<"\n";
    }
    else if(n==m)
    {
        if(n==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<1<<"\n";
            cout<<n<<"\n";
        }
    }
    else
    {
        convert(n);
        p=1;
        t=m-n;
        for(i=0; i<61; i++)
        {
            p*=2;
        }
        for(i=60; i>=0; i--)
        {
            p/=2;
            if(ara[i]==ara1[i]&&ara[i]==0&&t>=2*p)
            {
                t-=2*p;
                ara[i]=1;
                ara1[i]=1;
            }
        }
        if(t==0)
        {
            p=1;
            for(i=0; i<61; i++)
            {
                ans+=(ara[i]*p);
                p*=2;
            }
            p=1;
            for(i=0; i<61; i++)
            {
                ans1+=(ara1[i]*p);
                p*=2;
            }
            cout<<2<<"\n";
            cout<<ans<<" "<<ans1<<"\n";
        }
        else
        {
            if((m-n)%2==0)
            {
                cout<<3<<"\n";
                cout<<n<<" "<<(m-n)/2<<" "<<(m-n)/2<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
    }
}