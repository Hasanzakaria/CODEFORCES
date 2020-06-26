#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
map<long long int,bool>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,cou=0;
    cin>>n;
    v.push_back(n);
    mp[n]=1;
    while(n)
    {
        n++;
        while(n%10==0)
        {
            n/=10;
        }
        if(mp[n]==0)
        {
            v.push_back(n);
            mp[n]=1;
        }
        else
        {
           break;
        }
    }
    cout<<v.size()<<"\n";

}