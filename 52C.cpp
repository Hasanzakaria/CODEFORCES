#include<bits/stdc++.h>
using namespace std;
long long int ara[200000],tree[1000000],propagate[1000000];
void lazy(long long int node,long long int a,long long int b)
{
    tree[node]+=propagate[node];
    if(a!=b)
    {
        if(propagate[2*node]!=-100000000)
        {
            propagate[2*node]+=propagate[node];
        }
        else
        {
            propagate[2*node]=propagate[node];
        }
        if(propagate[(2*node)+1]!=-100000000)
        {
            propagate[(2*node)+1]+=propagate[node];
        }
        else
        {
            propagate[(2*node)+1]=propagate[node];
        }
    }
    propagate[node]=-100000000;
}
void update(long long int node,long long int a,long long int b,long long int x,long long int y,long long int value)
{
    if(propagate[node]!=-100000000)
    {
        lazy(node,a,b);
    }
    if(b<x||a>y)
    {
        return ;
    }
    if(a>=x&&b<=y)
    {
        tree[node]+=value;
        if(a!=b)
        {
            if(propagate[2*node]!=-100000000)
            {
                propagate[2*node]+=value;
            }
            else
            {
                propagate[2*node]=value;
            }
            if(propagate[(2*node)+1]!=-100000000)
            {
                propagate[(2*node)+1]+=value;
            }
            else
            {
                propagate[(2*node)+1]=value;
            }
        }
        return;
    }
    long long int mid;
    mid=(a+b)/2;
    update(2*node,a,mid,x,y,value);
    update((2*node)+1,mid+1,b,x,y,value);
    tree[node]=min(tree[2*node],tree[(2*node)+1]);
}
void build(long long int att,long long int L,long long int R)
{
    if(L==R)
    {
        tree[att]=ara[L];
        return;
    }
    int mid=(L+R)/2;
    build(2*att,L,mid);
    build(2*att+1,mid+1,R);
    tree[att]=min(tree[2*att],tree[2*att+1]);
}
long long int query(long long int node,long long int a,long long int b,long long int x,long long int y)
{
    if(propagate[node]!=-100000000)
    {
        lazy(node,a,b);
    }
    if(b<x||a>y)
    {
        return 1e18;
    }
    if(a>=x&&b<=y)
    {
        return tree[node];
    }
    long long int mid,p1,p2;
    mid=(a+b)/2;
    p1=query(2*node,a,mid,x,y);
    p2=query((2*node)+1,mid+1,b,x,y);
    return min(p1,p2);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,m,a,b,d;
    long long int ans;
    scanf("%I64d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&ara[i]);
    }
    for(i=0;i<1000000;i++)
    {
        propagate[i]=-100000000;
    }
    build(1,0,n-1);
    scanf("%I64d",&m);
    for(i=1; i<=m; i++)
    {
        char ch;
        scanf("%I64d%I64d%c",&a,&b,&ch);
        if(ch!='\n')
        {
            scanf("%I64d",&d);
            if(b<a)
            {
                update(1,0,n-1,a,n-1,d);
                update(1,0,n-1,0,b,d);
            }
            else
            {
                update(1,0,n-1,a,b,d);
            }
        }
        else
        {
            if(b<a)
            {
                ans=query(1,0,n-1,a,n-1);
                ans=min(ans,query(1,0,n-1,0,b));
            }
            else
            {
                ans=query(1,0,n-1,a,b);
            }
            printf("%I64d\n",ans);
        }
    }
}