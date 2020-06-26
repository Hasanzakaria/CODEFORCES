#include<iostream>
using namespace std;
int main ()
{
    int a,k,i;
    cin>>a;
    if(a%2==0)
    {
        k=a/2;
        cout<<k<<endl;
        for(i=1;i<=k;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        a=a-3;
        k=a/2;
        cout<<k+1<<endl;
        for(i=1;i<=k;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}