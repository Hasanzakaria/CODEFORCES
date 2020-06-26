#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int a,b;
};
vector<node>v;
node temp;
bool cmp (node r,node t)
{
    return r.b<t.b;
}
map<long long int,long long int>mp;
vector<long long int>ans;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,f,j,cou=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        temp.a=min(x,y);
        temp.b=max(x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(i=0;i<v.size();i++)
    {
        temp=v[i];
        if(mp[i]==0)
        {
            cou++;
            f=temp.b;
            ans.push_back(f);
            for(j=i+1;j<v.size();j++)
            {
                if(v[j].a<=f)
                {
                    mp[j]=1;
                }
            }
        }
    }
    cout<<cou<<"\n";
    for(i=0;i<cou;i++)
    {
        cout<<ans[i]<<" ";
    }
}