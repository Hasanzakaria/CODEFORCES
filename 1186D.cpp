#include<bits/stdc++.h>
using namespace std;
vector<double>d;
int main ()
{
    long long int n,i,f=0;
    double x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        d.push_back(x);
        f+=floor(x);
    }
    if(f==0)
    {
        for(i=0; i<d.size(); i++)
        {
            cout<<floor(d[i])<<"\n";
        }
    }
    else
    {
        for(i=0; i<d.size(); i++)
        {
            if(f<0)
            {
                f-=floor(d[i]);
                f+=ceil(d[i]);
                if(ceil(d[i])==-0)
                {
                    cout<<0<<"\n";
                }
                else
                {
                     cout<<ceil(d[i])<<"\n";
                }
                continue;
            }
            cout<<floor(d[i])<<"\n";
        }
    }

}