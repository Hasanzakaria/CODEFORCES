#include<bits/stdc++.h>
using namespace std;
struct tar
{
    long long int a,b,c;
};
bool acompare(tar lhs, tar rhs)
{
    if(lhs.a==rhs.a)
    {
       return lhs.b>rhs.b;
    }
    return lhs.a < rhs.a;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,l,t,flag=0;
    cin>>n;
    tar ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i].a>>ara[i].b;
        ara[i].c=i;
    }
    sort(ara,ara+n,acompare);
    l=ara[0].b;
    t=ara[0].c;
    for(i=1;i<n;i++)
    {
        if(ara[i].b<=l)
        {
           cout<<ara[i].c+1<<" "<<t+1<<endl;
           flag=1;
           break;
        }
        else
        {
            l=ara[i].b;
            t=ara[i].c;
        }
    }
    if(flag==0)
    {
        cout<<-1<<" "<<-1<<endl;
    }
}