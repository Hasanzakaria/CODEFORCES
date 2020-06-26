#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,r=0,i,j;
    cin>>n>>m>>k;
    r=n-1;
    r+=((n-2)*(n-3))/2;
    if(m>r||m<n-1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(m==0)
            {
                break;
            }
            if(i==k)
            {
                continue;
            }
            cout<<k<<" "<<i<<"\n";
            v.push_back(i);
            m--;
        }
        if(m>0)
        {
            for(i=0;i<v.size()-1;i++)
            {
                for(j=i+1;j<v.size()-1;j++)
                {
                    if(m==0)
                    {
                        break;
                    }
                    cout<<v[i]<<" "<<v[j]<<"\n";
                    m--;
                }
                if(m==0)
                {
                    break;
                }
            }
        }
    }
}