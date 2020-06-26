#include<bits/stdc++.h>
using namespace std;
long long int n,r;
string a;
long long int dip[300001][3][3][3][3];
long long int dp(long long int i,long long int flag,long long int aa,long long int bb,long long int x)
{
    if(flag==2)
    {
        if(x==2)
        {
            return 1;
        }
        if(aa==2&&bb==0)
        {
            return 1;
        }
        else if(bb==2&&aa==0)
        {
            return 1;
        }
        else if(bb==2&&aa==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    long long int k,l;
    if(i==r)
    {
        k=dp(i-1,2,aa,bb,x);
        return k;
    }
    if(dip[i][flag][aa][bb][x]!=-1)
    {
        return dip[i][flag][aa][bb][x];
    }
    if(flag==0)
    {
        if(a[i]=='A')
        {
            aa++;
        }
        else
        {
            bb++;
        }
        k=dp(i+1,1,aa,bb,0);
        l=dp(i+1,0,0,0,0);
    }
    else
    {
        k=dp(i-1,2,aa,bb,x);
        if(a[i]=='A')
        {
            if(aa<2)
            {
                aa++;
            }
            if(a[i-1]!=a[i]&&i-1>=0)
            {
                if(x<2)
                {
                    x++;
                }
            }
        }
        else
        {
            if(bb<2)
            {
                bb++;
            }
             if(a[i-1]!=a[i]&&i-1>=0)
            {
                if(x<2)
                {
                    x++;
                }
            }
        }
        l=dp(i+1,1,aa,bb,x);
    }
    dip[i][flag][aa][bb][x]=k+l;
    return dip[i][flag][aa][bb][x];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>a;
    r=a.size();
    long long int ans;
    memset(dip,-1,sizeof(dip));
    ans=dp(0,0,0,0,0);
    cout<<ans<<"\n";

}