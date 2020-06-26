#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,u;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,j,k,t,cou,r,x,y,flag;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        t=0;
        r=0;
        flag=0;
        char jak[a][b];
        for(j=0; j<a; j++)
        {
            for(k=0; k<b; k++)
            {
                cin>>jak[j][k];
            }
        }
        for(j=0; j<a; j++)
        {
            cou=0;
            for(k=0; k<b; k++)
            {
                if(jak[j][k]=='*')
                {
                    cou++;
                }
            }
            t=max(t,cou);
        }
        for(j=0;j<a;j++)
        {
            cou=0;
            for(k=0; k<b; k++)
            {
                if(jak[j][k]=='*')
                {
                    cou++;
                }
            }
            if(cou==t)
            {
               v.push_back(j);
            }
        }
        for(j=0; j<b; j++)
        {
            cou=0;
            for(k=0; k<a; k++)
            {
                if(jak[k][j]=='*')
                {
                    cou++;
                }
            }
            r=max(r,cou);
        }
        for(j=0; j<b; j++)
        {
            cou=0;
            for(k=0; k<a; k++)
            {
                if(jak[k][j]=='*')
                {
                    cou++;
                }
            }
            if(cou==r)
            {
               u.push_back(j);
            }
        }
        for(j=0;j<v.size();j++)
        {
            for(k=0;k<u.size();k++)
            {
                if(jak[v[j]][u[k]]=='.')
                {
                   flag=1;
                }
            }
        }
        if(flag)
        {
            cout<<(b-t)+(a-r)-1<<"\n";
        }
        else
        {
           cout<<(b-t)+(a-r)<<"\n";
        }
        v.clear();
        u.clear();

    }


}