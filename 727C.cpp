#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,r,sum;
    cin>>n;
    long long int ara[n+1];
    for(i=1;i<n;i++)
    {
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>t;
        v.push_back(t);
    }
    cout<<"? "<<1<<" "<<3<<endl;
    cin>>r;
    sum=v[0]+v[1]-r;
    sum/=2;
    ara[2]=sum;
    ara[1]=v[0]-ara[2];
    for(i=2;i<n;i++)
    {
        ara[i+1]=v[i-1]-ara[i];
    }
    cout<<"! ";
    for(i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}