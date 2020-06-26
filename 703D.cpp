#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
long long int tree[1000001];
void update(long long int idx,long long int x,long long int n)
{
       while(idx<=n)
       {
             tree[idx]^=x;
             idx += idx & (-idx);
       }
}
long long int queryy(long long int idx){
       long long int sum=0;
       while(idx>0){
             sum^=tree[idx];
             idx -= idx & (-idx);
       }
       return sum;
}
struct node
{
    long long int a,b,c;
};
vector<node>v;
node temp;
bool cmp(node e,node t)
{
    return e.b<t.b;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    long long int ara[n],pre[n],m,x,y,t,f,query=0,r,mm,nn;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    pre[0]=0;
    pre[1]=ara[0];
    for(i=1;i<n;i++)
    {
        pre[i+1]=pre[i]^ara[i];
    }
    cin>>m;
    pair<long long int,long long int>pq[m];
    long long int ans[m+1];
    for(i=1;i<=m;i++)
    {
       cin>>x>>y;
       temp.a=x;
       temp.b=y;
       temp.c=i;
       v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    temp=v[query];
    r=temp.b;
    for(i=0;i<n;i++)
    {
       if(mp[ara[i]]!=0)
       {
           t=mp[ara[i]];
           update(t,ara[i],n);
       }
       mp[ara[i]]=i+1;
       update(i+1,ara[i],n);
       while(i==r-1)
       {
          ans[temp.c]=(pre[temp.b]^pre[temp.a-1]);
          mm=queryy(temp.b);
          mm^=queryy(temp.a-1);
          ans[temp.c]^=mm;
          query++;
          temp=v[query];
          r=temp.b;
       }
    }
    for(i=1;i<=m;i++)
    {
        cout<<ans[i]<<"\n";
    }
}