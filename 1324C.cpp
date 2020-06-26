#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,maxx;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        maxx=-1;
        cin>>s;
        k=s.size();
        v.push_back(0);
        for(j=0;j<k;j++)
        {
            if(s[j]=='R')
            {
                v.push_back(j+1);
            }
        }
        v.push_back(k+1);
        for(j=0;j<v.size()-1;j++)
        {
            maxx=max(maxx,v[j+1]-v[j]);
        }
        cout<<maxx<<"\n";
        v.clear();
    }

}