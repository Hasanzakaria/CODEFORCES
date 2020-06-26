#include<bits/stdc++.h>
using namespace std;
vector<string>s;
vector<string>::iterator o;
map<string,int>mp,cp;
void prefix(string t)
{
    int i,l;
    string k;
    l=t.size();
    for(i=0; i<l-1; i++)
    {
        k=k+t[i];
        mp[k]=1;
    }
}

void suffix(string t)
{
    int l,i;
    string k;
    l=t.size();
    for(i=l-1;i>=1;i--)
    {
        k=t[i]+k;
        cp[k]=1;
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,i,l,flag=0,flg=0;
    string a,m,r,mm,rr,u,ss;
    cin>>n;
    k=2*n;
    for(i=1; i<=k-2; i++)
    {
        cin>>a;
        l=a.size();
        if(l==n-1&&flag==0)
        {
            m=a;
            flag=1;
        }
        else if(l==n-1&&flag==1)
        {
            r=a;
        }
        s.push_back(a);
    }
    mm=m+r[n-2];
    rr=r+m[n-2];
    prefix(mm);
    suffix(mm);
    for(o=s.begin(); o!=s.end(); o++)
    {
        u=*o;
        if(mp[u]==1)
        {
            ss=ss+"P";
            mp[u]=0;
        }
        else if(cp[u]==1)
        {
            ss=ss+"S";
            cp[u]=0;
        }
        else
        {
            flg=1;
        }
    }
    if(flg==1)
    {
        ss.clear();
        mp.clear();
        cp.clear();
        prefix(rr);
        suffix(rr);
        for(o=s.begin(); o!=s.end(); o++)
        {
            u=*o;
            if(mp[u]==1)
            {
                ss=ss+"P";
                mp[u]=0;
            }
            else if(cp[u]==1)
            {
                ss=ss+"S";
                cp[u]=0;
            }
        }
        cout<<ss<<endl;
    }
    else
    {
        cout<<ss<<endl;
    }


}