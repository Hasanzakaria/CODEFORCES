#include<iostream>
using namespace std;
int main ()
{
    long long int a,b,c,i,coun=0,t=0;
    cin>>a>>b>>c;
    long long int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<a;i++)
    {
        if(ara[i]<=b)
        {
           coun=coun+ara[i];
        }
        if(coun>c)
        {
           t++;
           coun=0;
        }
    }
    cout<<t;
}