#include<bits/stdc++.h>
using namespace std;
vector<double>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,h,c,l,f,k,j,p,u;
    double ab,ans,tt;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>h>>c>>tt;
        ans=(h+c)/2;
        ab=abs(ans-tt);
        p=2;
        if(ab==0)
        {
            cout<<2<<"\n";
            continue;
        }
        l=2*tt-h-c;
        f=h-tt;
        k=f/l;
        v.push_back((2*k)+1);
        v.push_back((2*(k+1))+1);
        for(j=0;j<2;j++)
        {
            u=v[j]/2.0;
            ans=(((u+1)*h)+(u*c))/v[j];
            ans=abs(ans-tt);
            if(ans<ab)
            {
                p=v[j];
                ab=ans;
            }
        }
        cout<<p<<"\n";
        v.clear();

    }
}