#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
ordered_set s[26];
ordered_set::iterator p,pp,ff;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string r;
    cin>>r;
    long long int k,i,l,m,x,e,y,j,cou,f,kk,ll,g;
    char ch,th;
    k=r.size();
    for(i=0;i<k;i++)
    {
        l=r[i]-'a';
        s[l].insert(i+1);
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
       cin>>x;
       cou=0;
       if(x==2)
       {
           cin>>e>>y;
           for(j=0;j<26;j++)
           {
             g=0;
             p=s[j].lower_bound(e);
             ff=s[j].upper_bound(y);
             if(p!=ff)
             {
                 ff--;
                 g=s[j].order_of_key(*ff)-s[j].order_of_key(*p)+1;
             }
             if(g>0)
             {
                 cou++;
             }
           }
           cout<<cou<<"\n";
       }
       else
       {
          cin>>e>>ch;
          th=r[e-1];
          f=th-'a';
          p=s[f].find(e);
          s[f].erase(p);
          r[e-1]=ch;
          f=ch-'a';
          s[f].insert(e);
       }
    }

}