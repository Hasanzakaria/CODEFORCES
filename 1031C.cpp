#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,p;
vector<long long int>::iterator l;
long long int soln(long long int n,long long int m)
{
    long long int y=2*(n+m);
    return (-1+sqrt(1+4*y))/2;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,i;
    cin>>n>>m;
    k=soln(n,m);
    for(i=k;i>=1;i--)
    {
       if(n-i>=0)
       {
           n-=i;
           v.push_back(i);
       }
       else if(m-i>=0)
       {
           m-=i;
           p.push_back(i);
       }
    }
    cout<<v.size()<<"\n";
    for(l=v.begin();l!=v.end();l++)
    {
        cout<<*l<<" ";
    }
    cout<<"\n";
    cout<<p.size()<<"\n";
    for(l=p.begin();l!=p.end();l++)
    {
        cout<<*l<<" ";
    }
    cout<<"\n";
}