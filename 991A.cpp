#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,c,d,k;
    cin>>a>>b>>c>>d;
    k=(a-c)+(b-c)+c;
    k=d-k;
    if(k<=0||c>a||c>b)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<k<<endl;
    }
}