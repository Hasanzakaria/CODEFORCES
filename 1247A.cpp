#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b;
    cin>>a>>b;
    if(a==9&&b==1)
    {
        cout<<a<<" "<<10<<"\n";
    }
    else if(a==b)
    {
       cout<<a*10<<" "<<(a*10)+1<<"\n";
    }
    else if(a+1==b)
    {
        cout<<a<<" "<<b<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
}