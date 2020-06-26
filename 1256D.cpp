#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,flag,k,r,j;
    string c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a>>b;
        cin>>c;
        for(j=0;j<a;j++)
        {
            if(c[j]=='0'&&flag==0)
            {
                mp[j]=1;
            }
            else if(c[j]=='1'&&flag==0)
            {
                flag=1;
                k=j;
            }
            else if(c[j]=='0'&&flag==1)
            {
                v.push_back(j);
            }
        }
        for(j=0;j<v.size();j++)
        {
            r=v[j]-k;
            if(r<=b)
            {
                b-=r;
                c[k]='0';
                mp[k]=1;
                k++;
            }
            else
            {
                c[v[j]-b]='0';
                mp[v[j]-b]=1;
                k=v[j]-b+1;
                b=0;
            }
        }
        for(j=0;j<a;j++)
        {
            if(mp[j]==0)
            {
                c[j]='1';
            }
        }
        mp.clear();
        v.clear();
        cout<<c<<"\n";
    }
}