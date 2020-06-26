#include<iostream>
using namespace std;
int main ()
{
    int n,m,y,x;
    cin>>n>>m;
    if((n>0&&m>0)||(n<0&&m<0))
    {
        y=n+m;
        x=n+m;
    }
    else
    {

        y=-n+m;
        x=n-m;
    }
    if(x>0)
    {
        cout<<0<<" "<<y<<" "<<x<<" "<<0;
    }
    else
    {
        cout<<x<<" "<<0<<" "<<0<<" "<<y;
    }


}