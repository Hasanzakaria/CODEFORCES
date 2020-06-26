#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,p,t,j;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a;
        p=1;
        while(a)
        {
            t=a%10;
            a/=10;
            if(t!=0)
            {
                v.push_back(t*p);
            }
            p*=10;
        }
        cout<<v.size()<<"\n";
        for(j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<"\n";
        v.clear();
    }

}