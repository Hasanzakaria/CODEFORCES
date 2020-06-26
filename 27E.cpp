#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
long long int n;
long long int dip[10][1000][1001];
long long int dp(long long int i,long long int cou,long long int product)
{
    if(product>n)
    {
        return 1e18+10;
    }
    if(cou==n)
    {
        return 1e18+10;
    }
    if(i==10)
    {
        if(product==n)
        {
            return 1;
        }
        else
        {
            return 1e18+10;
        }
    }
    if(dip[i][cou][product]!=-1)
    {
        return dip[i][cou][product];
    }
    long long int k,l;
    k=v[i]*dp(i,cou+1,product);
    l=dp(i+1,0,product*(cou+1));
    if((k/dp(i,cou+1,product))!=v[i])
    {
        k=1e18+10;
    }
    dip[i][cou][product]=min(k,l);
    return dip[i][cou][product];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int k;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
    v.push_back(17);
    v.push_back(19);
    v.push_back(23);
    v.push_back(29);
    cin>>n;
    memset(dip,-1,sizeof(dip));
    k=dp(0,0,1);
    cout<<k<<"\n";
}