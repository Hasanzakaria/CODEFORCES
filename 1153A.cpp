#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,a,y,t=10000000000000,r,i;
    double j,b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        j=m-a;
        if(j>0)
        {
            j=ceil(j/b);
            y=a+j*b;
        }
        else
        {
            y=a;
        }
        if(y>=m)
        {
            t=min(t,y);
            if(t==y)
            {
               r=i+1;
            }
        }
    }
    cout<<r<<endl;
}