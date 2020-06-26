#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,p,q,k;
    cin>>x>>y;
    p=y*log(x);
    q=x*log(y);
    if(p==q||x==y)
    {
        cout<<"=";
    }
    else if(p<q)
    {
        cout<<"<";
    }
    else
    {
        cout<<">";
    }
}