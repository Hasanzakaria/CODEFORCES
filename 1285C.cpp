#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,t,i,l,u,maxx=1e16,f,ans1,ans2,j,a,b;
    cin>>n;
    t=sqrt(n);
    for(i=1;i<=t;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            l=n/i;
            if(l!=i)
            {
                v.push_back(l);
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
       a=n/v[i];
       b=__gcd(v[i],a);
       if(b==1)
       {
           f=max(v[i],a);
           if(f<maxx)
           {
               ans1=v[i];
               ans2=a;
           }
       }
    }
    cout<<ans1<<" "<<ans2<<"\n";
}