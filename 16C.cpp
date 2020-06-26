#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,d,temp,temp1,x,y,z,t,i;
    v.clear();
    cin>>a>>b>>c>>d;
    while(__gcd(c,d)!=1)
    {
        temp=c/__gcd(c,d);
        temp1=d/__gcd(c,d);
        c=temp;
        d=temp1;
    }
    x=a/c;
    y=x*d;
    x*=c;
    if(x<=a&&y<=b)
    {
        v.push_back(make_pair(x,y));
    }
    y=b/d;
    x=c*y;
    y*=d;
    if(x<=a&&y<=b)
    {
        v.push_back(make_pair(x,y));
    }
    if(v.size()==0)
    {
        cout<<0<<" "<<0<<"\n";
    }
    else
    {
        if(v.size()==2)
        {
            z=v[0].first*v[0].second;
            t=v[1].first*v[1].second;
            if(z>t)
            {
                cout<<v[0].first<<" "<<v[0].second<<"\n";
            }
            else
            {
                cout<<v[1].first<<" "<<v[1].second<<"\n";
            }
        }
        else
        {
           cout<<v[0].first<<" "<<v[0].second<<"\n";
        }
    }

}