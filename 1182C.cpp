#include<bits/stdc++.h>
using namespace std;
vector<string>v,complete,semi;
vector<string>::iterator u,p,ko;
map<long long int,long long int>mp[100],rp[100];
map<long long int,string>cp[100];
bool ara[10000000];
map<long long int,long long int>up;
map<long long int,string>np;
void ans()
{
    long long int a,b,t,f,i;
    a=complete.size();
    b=semi.size();
    t=(a/2)*2;
    if(b>=t)
    {
        t/=2;
        cout<<t<<"\n";
        u=complete.begin();
        p=semi.begin();
        for(i=1; i<=t; i++)
        {
            cout<<*p<<" "<<*u<<"\n";
            u++;
            p++;
            cout<<*p<<" "<<*u<<"\n";
            u++;
            p++;
        }
    }
    else
    {
        f=(b/2)*2;
        f=(a-f)+(b%2);
        cout<<(b/2)+(f/4)<<"\n";
        u=complete.begin();
        p=semi.begin();
        for(i=1; i<=(b/2); i++)
        {
            cout<<*p<<" "<<*u<<"\n";
            u++;
            p++;
            cout<<*p<<" "<<*u<<"\n";
            u++;
            p++;
        }
        //hcout<<a<<" "<<b<<endl;
        if(b%2==1&&f>=4)
        {
            cout<<*p<<" "<<*u<<"\n";
            u++;
            ko=u;
            ko++;
            cout<<*ko<<" ";
            cout<<*u<<"\n";
            ko++;
            ko++;
            u=ko;
            f-=5;
            for(i=1; i<=f/4; i++)
            {
                cout<<*u<<" ";
                u++;
                ko=u;
                ko++;
                cout<<*ko<<"\n";
                cout<<*u<<" ";
                ko++;
                cout<<*ko<<"\n";
                ko++;
                u=ko;
            }
        }
        else if(b%2==0&&f>=4)
        {
            for(i=1; i<=f/4; i++)
            {
                cout<<*u<<" ";
                u++;
                ko=u;
                ko++;
                cout<<*ko<<"\n";
                cout<<*u<<" ";
                ko++;
                cout<<*ko<<"\n";
                ko++;
                u=ko;
            }
        }
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,cou,t,l;
    char ch;
    string a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
        k=a.size();
        cou=0;
        for(j=0; j<k; j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
            {
                cou++;
                ch=a[j];
            }
        }
        t=ch-'a';
        if(mp[t][cou]==0)
        {
            mp[t][cou]=1;
            cp[t][cou]=a;
            rp[t][cou]=i-1;
        }
        else
        {
            mp[t][cou]=0;
            complete.push_back(cp[t][cou]);
            complete.push_back(a);
            ara[rp[t][cou]]=1;
            ara[i-1]=1;
        }
    }
    k=v.size();
    for(i=0; i<k; i++)
    {
        if(!ara[i])
        {
            cou=0;
            l=v[i].size();
            a=v[i];
            for(j=0; j<l; j++)
            {
                if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
                {
                    cou++;
                }
            }
            if(up[cou]==0)
            {
                up[cou]=1;
                np[cou]=a;
            }
            else
            {
                up[cou]=0;
                semi.push_back(np[cou]);
                semi.push_back(a);
            }
        }
    }
    ans();
}