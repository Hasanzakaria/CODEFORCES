#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,maxx,minn,t,i,r,f,x,k,minnn=7e18,u,p=0;
    cin>>a>>b;
    maxx=max(a,b);
    minn=min(a,b);
    t=maxx-minn;
    r=sqrt(t);
    for(i=1;i<=r;i++)
    {
        if(t%i==0)
        {
            f=t/i;
            v.push_back(i);
            if(f==i)
            {
                continue;
            }
            v.push_back(f);
        }
    }
    for(l=v.begin();l!=v.end();l++)
    {
        x=*l;
        k=((-maxx)%x+x)%x;
        u=((maxx+k)*(minn+k))/__gcd(maxx+k,minn+k);
        if(u<minnn)
        {
            minnn=u;
            p=k;
        }
        else if(u==minnn)
        {
            p=min(p,k);
        }
    }
    cout<<p<<"\n";

}