#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
vector<long long int>u;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,orr,andd,k,flag;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            orr=i|j;
            andd=i&j;
            if(orr==a[0]&&andd==b[0])
            {
                v.push_back(make_pair(i,j));
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
        u.push_back(v[i].first);
        u.push_back(v[i].second);
        for(j=2;j<n;j++)
        {
            flag=0;
            for(k=0;k<=3;k++)
            {
                orr=u[j-1]|k;
                andd=u[j-1]&k;
                if(orr==a[j-1]&&andd==b[j-1])
                {
                   flag=1;
                   u.push_back(k);
                   break;
                }
            }
            if(flag==0)
            {
               break;
            }
        }
        if(u.size()==n)
        {
            break;
        }
        u.clear();
    }
    if(u.size()==0)
    {
          cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(i=0;i<u.size();i++)
        {
            cout<<u[i]<<" ";
        }

    }
}