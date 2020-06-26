#include<bits/stdc++.h>
using namespace std;
long long int ara[200000];
long long int cou[1000001],anss;
struct node
{
    long long int a,b,c,d;
};
vector<node>v;
vector<node>::iterator e;
node temp;
bool cmp(node x,node y)
{
    if(x.a<y.a)
    {
        return 1;
    }
    else if(x.a==y.a)
    {
        return x.c<y.c;
    }
    return 0;
}
void removee(long long int pos)
{
    anss-=((cou[ara[pos]]*cou[ara[pos]])*ara[pos]);
    cou[ara[pos]]--;
    anss+=((cou[ara[pos]]*cou[ara[pos]])*ara[pos]);

}
void add(long long int pos)
{
    anss-=((cou[ara[pos]]*cou[ara[pos]])*ara[pos]);
    cou[ara[pos]]++;
    anss+=((cou[ara[pos]]*cou[ara[pos]])*ara[pos]);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,x,y,l,currentl,currentr,w,r;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    l=ceil(sqrt(n));
    long long int ans[m+1];
    for(j=1; j<=m; j++)
    {
        cin>>x>>y;
        x--;
        y--;
        temp.a=x/l;
        temp.b=x;
        temp.c=y;
        temp.d=j;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    currentl=0;
    currentr=0;
    cou[ara[0]]++;
    anss+=(ara[0]*(cou[ara[0]]*cou[ara[0]]));
    for(e=v.begin(); e!=v.end(); e++)
    {
        temp=*e;
        w=temp.b;
        r=temp.c;
        while(currentl<w)
        {
            removee(currentl);
            currentl++;
        }
        while(currentl>w)
        {
            add(currentl-1);
            currentl--;
        }
        while(currentr<r)
        {
            add(currentr+1);
            currentr++;
        }
        while(currentr>r)
        {
            removee(currentr);
            currentr--;
        }
        ans[temp.d]=anss;
    }
    for(j=1; j<=m; j++)
    {
        cout<<ans[j]<<"\n";
    }

}