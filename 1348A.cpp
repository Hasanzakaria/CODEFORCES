#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,p,sum,aa,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        p=2;
        sum=0;
        for(j=1;j<=a;j++)
        {
            v.push_back(p);
            sum+=p;
            p*=2;
        }
        aa=v[a-1];
        for(j=1;j<=(a/2)-1;j++)
        {
            aa+=v[j-1];
        }
        b=sum-aa;
        cout<<aa-b<<"\n";
        v.clear();
    }
}