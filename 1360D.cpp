#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,k,j,e;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        k=sqrt(a);
        for(j=1;j<=k;j++)
        {
            if(a%j==0)
            {
                e=a/j;
                if(e==j)
                {
                    v.push_back(e);
                }
                else
                {
                    v.push_back(e);
                    v.push_back(j);
                }
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(j=0;j<v.size();j++)
        {
            if(v[j]<=b)
            {
                cout<<a/v[j]<<"\n";
                break;
            }
        }
        v.clear();
    }
 
}