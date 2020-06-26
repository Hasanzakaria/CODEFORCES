#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,y,t=0;
    cin>>a>>b;
    cout<<min(a,b)+1<<endl;
    y=min(a,b);
    if(y==a)
    {
        while(y!=-1)
        {
            cout<<y<<" "<<t<<endl;
            t++;
            y--;
        }
    }
    else
    {
        while(y!=-1)
        {
            cout<<t<<" "<<y<<endl;
            t++;
            y--;
        }
    }

}