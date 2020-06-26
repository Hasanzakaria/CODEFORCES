#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
multiset<long long int>m;
multiset<long long int>::iterator uu;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,b,k,j,flag,cou,maxx,u,f,r,ans,x;
    string a;
    char ch;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>f>>b;
        cin>>a;
        ans=10000000;
        k=f;
        flag=0;
        cou=0;
        maxx=0;
        r=0;
        for(j=0; j<k; j++)
        {
            if(flag==0)
            {
                flag=1;
                ch=a[j];
                cou++;
            }
            else if(flag==1 &&ch=='R')
            {
                if(a[j]=='G')
                {
                    cou++;
                    ch=a[j];
                }
                else
                {
                    flag=0;
                    j--;
                    v.push_back(cou);
                    cou=0;
                }
            }
            else if(flag==1&&ch=='G')
            {
                if(a[j]=='B')
                {
                    cou++;
                    ch=a[j];
                }
                else
                {
                    flag=0;
                    j--;
                    v.push_back(cou);
                    cou=0;
                }
            }
            else if(flag==1&&ch=='B')
            {
                if(a[j]=='R')
                {
                    cou++;
                    ch=a[j];
                }
                else
                {
                    flag=0;
                    j--;
                    v.push_back(cou);
                    cou=0;
                }
            }
        }
        if(cou>0)
        {
            v.push_back(cou);
        }
        cou=0;
        x=0;
        for(j=0; j<v.size(); j++)
        {
            flag=0;
            while(r>=b)
            {
                ans=min(ans,cou-1);
                uu=m.find(v[x]);
                m.erase(uu);
                r-=v[x];
                x++;
                cou--;
            }
            r+=v[j];
            cou++;
            m.insert(v[j]);
        }
        if(r>=b)
        {
            while(r>=b)
            {
                ans=min(ans,cou-1);
                uu=m.find(v[x]);
                m.erase(uu);
                r-=v[x];
                x++;
                cou--;
            }
        }
        m.clear();
        v.clear();
        cout<<ans<<"\n";

    }


}