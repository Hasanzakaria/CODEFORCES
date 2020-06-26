#include<bits/stdc++.h>
using namespace std;
vector<char>v[100000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,l,i,j,k,r,t,u;
    cin>>n>>m>>l;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    j=0;
    u=j;
    for(i=0; i<s.size(); i++)
    {
        if(j<l)
        {
            v[j].push_back(s[i]);
            j++;
        }
        else
        {
            t=v[l-1].size();
            for(k=l-2;k>=u;k--)
            {
                r=v[k].size();
                if(v[k][r-1]!=v[l-1][t-1])
                {
                    u=k+1;
                    break;
                }
            }
            j=u;
            i--;
            if(j==l-1||v[l-1].size()==m)
            {
                break;
            }
        }
    }
    for(k=i+1; k<s.size(); k++)
    {
        if(v[l-1].size()!=m)
        {
            v[l-1].push_back(s[k]);
        }
        else
        {
            break;
        }
    }
    j=0;
    for(i=k; i<s.size(); i++)
    {
        if(v[j].size()!=m)
        {
            v[j].push_back(s[i]);
        }
        else
        {
            j++;
            i--;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j];
        }
        cout<<"\n";
    }
}