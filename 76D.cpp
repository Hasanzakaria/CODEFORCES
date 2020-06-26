#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a,b,x,y;
    cin>>a>>b;
    x=(a-b)/2;
    y=x+b;
    if(a<b||(x&y)!=x||(a%2==1&&b%2==0)||(a%2==0&&b%2==1))
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<x<<" "<<y<<"\n";
    }
}