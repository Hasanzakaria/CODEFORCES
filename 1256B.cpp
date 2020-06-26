#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,r,l,temp;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        r=a-1;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=j;
        }
        for(j=1;j<=a;j++)
        {
            l=mp[j];
            while(r>0&&l>0&&cp[l-1]==0&&ara[l]<ara[l-1])
            {
                temp=ara[l];
                ara[l]=ara[l-1];
                ara[l-1]=temp;
                mp[ara[l]]=l;
                mp[ara[l-1]]=l-1;
                cp[l-1]=1;
                r--;
                l--;
            }
        }
        for(j=0;j<a;j++)
        {
            cout<<ara[j]<<" ";
        }
        cout<<"\n";
        mp.clear();
        cp.clear();
    }
}