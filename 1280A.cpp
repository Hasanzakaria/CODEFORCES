#include<bits/stdc++.h>
using namespace std;
char ch[2000000];
long long int mod=1e9+7;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,f,r,l,d,flag,u,frontt,backk,total,e=48;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cin>>s;
        flag=0;
        for(j=0;j<s.size();j++)
        {
            ch[j]=s[j];
        }
        f=s.size();
        u=f;
        for(j=0; ;j++)
        {
            r=ch[j]-e;
            if(f>=a)
            {
                break;
            }
            for(l=1;l<r;l++)
            {
                for(d=j+1;d<u;d++)
                {
                    ch[f]=ch[d];
                    f++;
                    if(f>=a)
                    {
                       flag=1;
                       break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
            u=f;
            if(flag)
            {
                break;
            }
        }
        total=s.size();
        for(j=0;j<a;j++)
        {
            r=ch[j]-e;
            frontt=j+1;
            backk=((total%mod)-(frontt%mod)+mod)%mod;
            total=((r%mod)*(backk%mod))%mod;
            total=((total%mod)+(frontt%mod))%mod;
        }
        cout<<total<<"\n";
    }
}