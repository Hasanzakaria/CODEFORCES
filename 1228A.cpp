#include<bits/stdc++.h>
using namespace std;
set<long long int>s;
multiset<long long int>p;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i,k,ans=-1;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        k=i;
        while(k!=0)
        {
            s.insert(k%10);
            p.insert(k%10);
            k/=10;
        }
        if(s.size()==p.size())
        {
            ans=i;
            break;
        }
        s.clear();
        p.clear();
    }
    cout<<ans<<"\n";
}