#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
vector<long long int>v;
vector<long long int>::iterator l,pp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,a,j,k,g,h;
    double s,x,y,p=100000001;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=100000001;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[a];
            mp[ara[a]]++;
            if(mp[ara[a]]==2)
            {
               v.push_back(ara[a]);
            }
            else if (mp[ara[a]]==4)
            {
                v.push_back(ara[a]);
            }
        }
        sort(v.begin(),v.end());
        for(l=v.begin();l!=v.end()-1;l++)
        {
            pp=l+1;
            x=*l;
            y=*pp;
            s=(2*(x+y))*(2*(x+y))/(x*y);
            p=min(p,s);
            if(p==s)
            {
               g=x;
               h=y;
            }
        }
        v.clear();
        mp.clear();
        cout<<g<<" "<<g<<" "<<h<<" "<<h<<endl;
    }
 
 
}