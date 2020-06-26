#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,p,i,k,ans=-1,r=1,j,cou,sum;
    cin>>n>>p;
    long long int power[33];
    for(i=0;i<=32;i++)
    {
        power[i]=r;
        r*=2;
    }
    for(i=1;i<=100;i++)
    {
        k=n-(i*p);
        cou=0;
        sum=0;
        if(k<=0)
        {
            break;
        }
        for(j=32;j>=0;j--)
        {
            if(power[j]<=k)
            {
                k-=power[j];
                cou++;
                sum+=power[j];
            }
        }
        if(i>=cou&&sum>=i)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<"\n";
}