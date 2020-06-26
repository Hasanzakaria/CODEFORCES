#include<iostream>
#include<deque>
using namespace std;
int main ()
{
    int a,b,c,i,d,e,f,cou=0,flag=0,ll=0;
    deque<int>k,l,aa,bb;
    cin>>a;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>d;
        k.push_back(d);
    }
    cin>>c;
    for(i=1;i<=c;i++)
    {
        cin>>d;
        l.push_back(d);
    }
    aa=k;
    bb=l;
    while(!k.empty()&&!l.empty())
    {
       ll++;
       e=k.front();
       f=l.front();
       k.pop_front();
       l.pop_front();
       if(e>f)
       {
          k.push_back(f);
          k.push_back(e);
          cou++;
          flag=0;
       }
       else if(f>e)
       {
           l.push_back(e);
           l.push_back(f);
           cou++;
           flag=1;
       }
       else
       {
           cout<<-1;
           flag=2;
           break;
       }
       if(k==aa&&l==bb)
       {
           cout<<-1;
           flag=2;
           break;
       }
       if(ll>1000000)
       {
           cout<<-1;
           flag=2;
           break;
       }
    }
    if(flag==0)
    {
        cout<<cou<<" "<<1;
    }
    else if(flag==1)
    {
        cout<<cou<<" "<<2;
    }

}