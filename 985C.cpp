#include<bits/stdc++.h>
using namespace std;
multiset<long long int>s;
multiset<long long int>::iterator ll;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,l,i,f,sum=0,j,t,flag=0;
    cin>>n>>k>>l;
    long long int ara[n*k];
    for(i=0;i<n*k;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+(n*k));
    for(i=0;i<n*k;i+=k)
    {
        f=ara[i];
        if(f-ara[0]<=l)
        {
            sum+=f;
            for(j=i+1;j<=i+k-1;j++)
            {
               t=ara[j]-ara[0];
               if(t<=l)
               {
                  s.insert(ara[j]);
               }
            }
        }
        else
        {
            if(s.size()>0)
            {
               ll=s.end();
               ll--;
               sum+=*ll;
               s.erase(ll);
            }
            else
            {
               flag=1;
            }
        }
    }
    if(flag)
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<sum<<"\n";
    }
}