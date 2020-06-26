#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,cou,e,f;
    string c,d;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cin>>c>>d;
        cou=0;
        for(j=0;j<a;j++)
        {
            if(c[j]!=d[j])
            {
                v.push_back(j);
            }
        }
        if(v.size()==2)
        {
            e=v[0];
            f=v[1];
            ch=c[e];
            c[e]=d[f];
            d[f]=ch;
            if(c==d)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        else
        {
            cout<<"No\n";
        }
        v.clear();
    }
}