#include<bits/stdc++.h>
using namespace std;
vector<int>v,t;
vector<int>::iterator l,k;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,sum,i,a,b,r=0,u,f;
    cin>>n>>sum;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v.push_back(a);
        t.push_back(b-a);
        r+=a;
    }
    if(sum<r)
    {
        cout<<"NO\n";
    }
    else
    {
        sum-=r;
        for(l=t.begin(),k=v.begin();l!=t.end();l++,k++)
        {
            u=*l;
            if(sum>=u)
            {
                *k=*k+u;
                sum-=u;
            }
            else if(sum<u)
            {
                *k=*k+sum;
                sum=0;
            }
            if(sum==0)
            {
                break;
            }
        }
        if(sum>0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(k=v.begin();k!=v.end();k++)
            {
                cout<<*k<<" ";
            }
        }
    }
}