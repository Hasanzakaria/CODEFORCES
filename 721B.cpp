#include<iostream>
#include<queue>
using namespace std;
int main ()
{
    queue<string>c;
    int n,m,i,t,f,cou=0,l=0,p,q;
    cin>>n>>m;
    string a,b,r;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        c.push(a);
    }
    cin>>b;
    t=b.size();
    while(!c.empty())
    {
       r=c.front();
       f=r.size();
       if(f<t)
       {
         cou++;
       }
       if(f<=t)
       {
          l++;
       }
       c.pop();

    }
    p=cou+(cou/m)*5+1;
    q=l+((l-1)/m)*5;
    cout<<p<<" "<<q;


}