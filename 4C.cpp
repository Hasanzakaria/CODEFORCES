#include<bits/stdc++.h>
using namespace std;
map<string,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    string a;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(mp[a]==0)
        {
            cout<<"OK\n";
            mp[a]=1;
        }
        else
        {
            cout<<a<<mp[a]<<"\n";
            mp[a]++;
        }
    }
}