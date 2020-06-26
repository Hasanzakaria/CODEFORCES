#include<bits/stdc++.h>
using namespace std;
vector<string>t,u;
vector<string>::iterator l;
map<string,long long int>mp,cp,tp;
map<string,string>rp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j,r;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        t.push_back(a);
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        u.push_back(a);
        mp[a]=1;
    }
    for(l=t.begin();l!=t.end();l++)
    {
        a=*l;
        k=a.size();
        for(j=0;j<k;j++)
        {
            string c;
            for(r=j;r<k;r++)
            {
                c=c+a[r];
                if(mp[c]==1&&cp[c]==0)
                {
                    cp[c]=1;
                    tp[c]++;
                    rp[c]=a;
                }
            }
        }
        cp.clear();
    }
    for(l=u.begin();l!=u.end();l++)
    {
        if(tp[*l]==0)
        {
            cout<<tp[*l]<<" -"<<"\n";
            continue;
        }
        cout<<tp[*l]<<" "<<rp[*l]<<"\n";
    }
}