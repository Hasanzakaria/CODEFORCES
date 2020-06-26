#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,l,sum=0;
    string c,f;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       cin>>c;
       mp[c]++;
       v.push_back(c);
    }
    for(i=0;i<v.size();i++)
    {
        mp[v[i]]--;
        cp=mp;
        for(j=i+1;j<v.size();j++)
        {
            cp[v[j]]--;
            for(l=0;l<m;l++)
            {
                if(v[i][l]==v[j][l])
                {
                  f+=v[i][l];
                }
                else
                {
                    if(v[i][l]!='S'&&v[j][l]!='S')
                    {
                        f+='S';
                    }
                    else if(v[i][l]!='E'&&v[j][l]!='E')
                    {
                        f+='E';
                    }
                    else
                    {
                        f+='T';
                    }
                }
            }
            sum+=cp[f];
            f.clear();
        }
    }
    cout<<sum<<"\n";

}