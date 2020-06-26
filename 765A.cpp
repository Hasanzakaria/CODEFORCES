#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    string a,b;
    cin>>a;
    for(i=1;i<=n;i++)
    {
        cin>>b;
    }
    if(n%2==0)
    {
        cout<<"home";
    }
    else
    {
        cout<<"contest";
    }

}