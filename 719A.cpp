#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    string a="zak";
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<n;i++)
    {
        if(ara[i]>ara[i-1])
        {
           a="UP";
        }
        else
        {
            a="DOWN";
        }
    }
    if(a=="zak"&&ara[n-1]!=0&&ara[n-1]!=15)
    {
        cout<<-1;
    }
    else
    {
        if(ara[n-1]==15)
        {
            cout<<"DOWN";
        }
        else if(ara[n-1]==0)
        {
            cout<<"UP";
        }
        else
        {
            cout<<a;
        }
    }

}