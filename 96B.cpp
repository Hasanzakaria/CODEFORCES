#include<bits/stdc++.h>
using namespace std;
long long int ara[15],r,k,taken[15],ans[15],anss=200000000000;
void permu(long long int pos)
{
    long long int i;
    if(pos==k+1)
    {
        long long int rr=1,p=0;
        for(i=k;i>=1;i--)
        {
            p+=(ans[i]*rr);
            rr=10*rr;
        }
        if(p>=r)
        {
            anss=min(p,anss);
        }
        return ;
    }
    for(i=0;i<k;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            ans[pos]=ara[i];
            permu(pos+1);
            taken[i]=0;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,p=1;
    string a;
    cin>>a;
    k=a.size();
    for(i=k-1;i>=0;i--)
    {
        r+=(a[i]-48)*p;
        p=10*p;
    }
    if(k%2!=0)
    {
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(i<(k/2))
        {
            ara[i]=4;
        }
        else
        {
            ara[i]=7;
        }
    }
    permu(1);
    if(anss==200000000000)
    {
        for(i=0;i<k+2;i++)
        {
            if(i<((k+2)/2))
            {
                cout<<4;
            }
            else
            {
                cout<<7;
            }
        }
        cout<<"\n";
    }
    else
    {
        cout<<anss<<"\n";
    }
}