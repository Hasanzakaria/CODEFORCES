#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp[200];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,l,f,r,q,p,w,qq,e,qqq,ll;
    string a;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=1;i<=n;i++)
    {
        p=1;
        q=0;
        qq=0;
        qqq=0;
        cin>>a;
        l=a.size();
        for(j=0;j<l;j++)
        {
            if(a[j]=='(')
            {
                f=j;
            }
            else if(a[j]=='+')
            {
                r=j;
            }
            else if(a[j]==')')
            {
               w=j;
            }
            else if(a[j]=='/')
            {
                e=j;
            }
        }
        for(j=r-1;j>f;j--)
        {
            q+=(a[j]-48)*p;
            p=p*10;
        }
        p=1;
        for(j=w-1;j>r;j--)
        {
           qq+=(a[j]-48)*p;
           p=p*10;
        }
        p=1;
        for(j=l-1;j>e;j--)
        {
          qqq+=(a[j]-48)*p;
          p=p*10;
        }
        q+=qq;
        ll=__gcd(q,qqq);
        q/=ll;
        qqq/=ll;
        mp[q][qqq]++;
        pq[i-1].first=q;
        pq[i-1].second=qqq;
    }
    for(i=0;i<n;i++)
    {
        q=pq[i].first;
        qqq=pq[i].second;
        cout<<mp[q][qqq]<<" ";
    }
}