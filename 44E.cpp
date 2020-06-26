#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,a,b,minn,maxx,k,r,p,j,i;
    string s,c;
    cin>>n>>a>>b;
    cin>>s;
    minn=(n*a);
    maxx=(n*b);
    k=s.size();
    if(k<minn||k>maxx)
    {
        cout<<"No solution\n";
    }
    else
    {
        r=k/n;
        k%=n;
        j=0;
        for(i=1;i<=n;i++)
        {
            p=r;
            while(p)
            {
                c=c+s[j];
                p--;
                j++;
            }
            if(k>0)
            {
                c=c+s[j];
                j++;
                k--;
            }
            v.push_back(c);
            c.clear();
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<"\n";
        }
    }
}