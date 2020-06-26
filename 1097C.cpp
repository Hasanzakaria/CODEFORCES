#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>::iterator g;
map<int,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j,l,p,x,cou=0,flag;
    string a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        flag=0;
        cin>>a;
        k=a.size();
        l=0;
        p=0;
        for(j=0; j<k; j++)
        {
            if(a[j]=='(')
            {
                l++;
            }
            else
            {
                l--;
            }
            if(l<0)
            {
                p--;
                l=0;
                flag=1;
            }
        }
        if(flag==0)
        {
            if(mp[l]==0)
            {
                v.push_back(l);
            }
            mp[l]++;
        }
        else
        {
            if(l==0)
            {
                mp[p]++;
            }
        }
    }
    for(g=v.begin(); g!=v.end(); g++)
    {
        x=*g;
        if(x==0)
        {
            cou+=(mp[x]/2);
        }
        else
        {
            cou+=min(mp[x],mp[-x]);
        }
    }
    cout<<cou<<endl;
}