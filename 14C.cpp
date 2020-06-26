#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int a,b,c,d;
};
vector<node>v,t;
node temp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    node ara[4];
    long long int i;
    for(i=0;i<4;i++)
    {
        cin>>ara[i].a>>ara[i].b>>ara[i].c>>ara[i].d;
        if(ara[i].b==ara[i].d)
        {
            v.push_back(ara[i]);
        }
        else if(ara[i].a==ara[i].c)
        {
            t.push_back(ara[i]);
        }
    }
    if(v.size()==2&&t.size()==2)
    {
       if(v[0].b!=v[1].b&&t[0].a!=t[1].a&&(((v[0].a==v[1].a)&&(v[0].c==v[1].c))||((v[0].a==v[1].c)&&(v[0].c==v[1].a)))&&(((t[0].b==t[1].b)&&(t[0].d==t[1].d))||((t[0].b==t[1].d)&&(t[0].d==t[1].b)))&&((v[0].a==t[0].a)||(v[0].a==t[1].a))&&((v[0].c==t[0].a)||(v[0].c==t[1].a)))
       {
          cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }
    }
    else
    {
        cout<<"NO\n";
    }
}