#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,k,i,j,f=0,r=0;
    cin>>n>>m>>k;
    vector<pair<int,int> >v[k];
    vector<pair<int,int> >::iterator p;
    pair<int,int>y;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            for(j=1; j<=m; j++)
            {
                if(r==k)
                {
                   v[r-1].push_back(pair<int,int> (i,j));
                   continue;
                }
                if(f<2)
                {
                    v[r].push_back(pair<int,int> (i,j));
                    f++;
                }
                if(f==2)
                {
                    r++;
                    f=0;
                }
            }
        }
        else
        {
            for(j=m; j>=1; j--)
            {
                if(r==k)
                {
                   v[r-1].push_back(pair<int,int> (i,j));
                   continue;
                }
                if(f<2)
                {
                    v[r].push_back(pair<int,int> (i,j));
                    f++;
                }
                if(f==2)
                {
                    r++;
                    f=0;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<v[i].size()<<" ";
        for(p=v[i].begin();p!=v[i].end();p++)
        {
            y=*p;
            cout<<y.first<<" "<<y.second<<" ";
        }
        cout<<endl;
    }
}