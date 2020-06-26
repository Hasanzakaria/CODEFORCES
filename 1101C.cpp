#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
struct node
{
    long long int first,second,c;
};
bool cmp(node a,node b)
{
    return a.first<b.first;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,a,j,t,flag;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a;
        node p[a];
        for(j=0;j<a;j++)
        {
            cin>>p[j].first>>p[j].second;
            p[j].c=j;
        }
        sort(p,p+a,cmp);
        t=p[0].second;
        for(j=1;j<a;j++)
        {
            if(p[j].first>t)
            {
               flag=1;
               break;
            }
            t=max(t,p[j].second);
        }
        if(flag==1)
        {
           mp[p[0].c]=1;
           t=p[0].second;
           for(j=1;j<a;j++)
           {
               if(p[j].first>t)
               {
                   mp[p[j].c]=2;
               }
               else
               {
                   mp[p[j].c]=1;
                   t=max(p[j].second,t);
               }
           }
           for(j=0;j<a;j++)
           {
               cout<<mp[j]<<" ";
           }
           cout<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
        mp.clear();
    }

}