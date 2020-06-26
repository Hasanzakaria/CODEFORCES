#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long long int k,i,j,flag=0,flag1=0;
    k=s.size();
    i=0;
    j=k-1;
    while(i<j)
    {
        if(s[i]=='('&&flag==0)
        {
            flag=1;
        }
        if(s[j]==')'&&flag1==0)
        {
            flag1=1;
        }
        if(flag&&flag1)
        {
            v.push_back(i+1);
            v.push_back(j+1);
            flag=0;
            flag1=0;
        }
        if(flag==0)
        {
            i++;
        }
        if(flag1==0)
        {
            j--;
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<1<<"\n";
        cout<<v.size()<<"\n";
    }
    for(j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
}