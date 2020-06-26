#include<bits/stdc++.h>
using namespace std;
stack<long long int>s;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,k,sum,e;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        sum=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            cp[ara[j]]=j+1;
        }
        long long int jak[b];
        for(j=0;j<b;j++)
        {
            cin>>jak[j];
        }
        for(j=a-1;j>=0;j--)
        {
            s.push(ara[j]);
        }
        for(j=0;j<b;j++)
        {
            if(mp[jak[j]]==1)
            {
                sum+=1;
            }
            else
            {
                while(!s.empty())
                {
                    e=s.top();
                    s.pop();
                    mp[e]=1;
                    if(e==jak[j])
                    {
                        break;
                    }
                }
                sum+=(cp[jak[j]]-j-1)*2;
                sum+=1;
            }
        }
        cout<<sum<<"\n";
        mp.clear();
        cp.clear();
        while(!s.empty())
        {
            s.pop();
        }
    }


}