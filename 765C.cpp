#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,k,t;
    cin>>a>>b>>c;
    k=b/a;
    t=c/a;
    if(!k&&!t)
    {
        cout<<-1;
    }
    else if(!t&&b%a!=0)
    {
        cout<<-1;
    }
    else if(!k&&c%a!=0)
    {
        cout<<-1;
    }
    else
    {
        cout<<k+t;
    }

}