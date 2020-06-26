#include<iostream>
using namespace std;
int main ()
{
    int a,i,k=1,u=1;
    cin>>a;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<a-1;i++)
    {
        if(ara[i+1]>ara[i])
        {
           k++;
        }
        else
        {
            if(k>u)
            {
                u=k;
            }
            k=1;
        }
    }
    if(k>u)
    {
        u=k;
    }
    cout<<u;
}