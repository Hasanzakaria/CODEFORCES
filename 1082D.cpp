#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,o;
vector<long long int>edge[1000];
map<long long int,long long int>mp,cp[1000];
vector<long long int>::iterator l,r;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,cou=0,f,t=0;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
        mp[i+1]=ara[i];
        if(ara[i]>1)
        {
            v.push_back(i+1);
        }
        else
        {
            o.push_back(i+1);
        }
    }
    if(sum>=2*n-2)
    {
        cout<<"YES ";
        cou+=v.size()-1;
        if(o.size()>2)
        {
            cou+=2;
        }
        else
        {
            cou+=o.size();
        }
        cout<<cou<<"\n";
        for(l=v.begin(); l!=v.end()-1; l++)
        {
            r=l;
            r++;
            edge[*l].push_back(*r);
            edge[*r].push_back(*l);
            mp[*l]--;
            mp[*r]--;
        }
        l=o.begin();
        if(l!=o.end())
        {
            r=v.begin();
            mp[*r]--;
            edge[*l].push_back(*r);
            edge[*r].push_back(*l);
            l++;
            if(l!=o.end())
            {
                r=v.end()-1;
                mp[*r]--;
                edge[*l].push_back(*r);
                edge[*r].push_back(*l);
            }
        }
        t=cou;
        if(o.size()>2)
        {
            for(l=o.begin()+2; l!=o.end(); l++)
            {
                f=*l;
                for(i=1; i<=n; i++)
                {
                    if(ara[i-1]>1)
                    {
                        if(mp[i]>0)
                        {
                            mp[i]--;
                            edge[f].push_back(i);
                            edge[i].push_back(f);
                            t++;
                            break;
                        }
                    }
                }
            }
        }
        cout<<t<<"\n";
        for(i=1; i<=n; i++)
        {
            for(l=edge[i].begin(); l!=edge[i].end(); l++)
            {
                if(cp[i][*l]==0)
                {
                    cp[i][*l]=1;
                    cp[*l][i]=1;
                    cout<<i<<" "<<*l<<"\n";
                }
            }
        }

    }
    else
    {
        cout<<"NO\n";
    }
}