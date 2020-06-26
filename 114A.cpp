#include<iostream>
using namespace std;
int main ()
{
    long long int a,b,l=0,flag=0,k;
    cin>>a>>b;
    k=a;
    for( ; ; )
    {
        if(a==b)
        {
            flag=1;
            break;
        }
        if(a>b)
        {
            break;
        }
        a=a*k;
        l++;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl<<l;
    }
    else
    {
        cout<<"NO";
    }
}