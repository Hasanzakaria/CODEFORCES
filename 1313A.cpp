#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        cin>>a>>b>>c;
        if(a>0)
        {
            a--;
            ans++;
        }
        if(b>0)
        {
            b--;
            ans++;
        }
        if(c>0)
        {
            c--;
            ans++;
        }
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        a=v[2];
        b=v[1];
        c=v[0];
        if(a>0&&b>0)
        {
            a--;
            b--;
            ans++;
        }
        if(a>0&&c>0)
        {
            a--;
            c--;
            ans++;
        }
        if(b>0&&c>0)
        {
            c--;
            b--;
            ans++;
        }
        if(a>0&&b>0&&c>0)
        {
            a--;
            b--;
            c--;
            ans++;
        }
        cout<<ans<<"\n";
        v.clear();
    }

}