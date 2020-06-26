#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,flag,ans;
    string c,d;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cin>>c>>d;
        ans=0;
        for(j=0;j<a;j++)
        {
            if(c[j]!=d[j])
            {
                flag=0;
                for(k=j+1;k<a;k++)
                {
                    if(c[k]==c[j]&&c[k]!=d[k])
                    {
                       ch=c[k];
                       c[k]=d[j];
                       d[j]=ch;
                       v.push_back(make_pair(k+1,j+1));
                       flag=1;
                       break;
                    }
                }
                if(flag==0)
                {
                    for(k=j+1;k<a;k++)
                    {
                        if(c[j]==d[k]&&c[k]!=d[k])
                        {
                            ch=d[k];
                            d[k]=c[k];
                            c[k]=ch;
                            v.push_back(make_pair(k+1,k+1));
                            ch=c[k];
                            c[k]=d[j];
                            d[j]=ch;
                            v.push_back(make_pair(k+1,j+1));
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                   ans=1;
                   break;
                }
            }
        }
        if(ans==1)
        {
            cout<<"No\n";
        }
        else
        {
            pair<long long int,long long int>pq;
            cout<<"Yes\n";
            cout<<v.size()<<"\n";
            for(j=0;j<v.size();j++)
            {
                pq=v[j];
                cout<<pq.first<<" "<<pq.second<<"\n";
            }
        }
        v.clear();
    }
}