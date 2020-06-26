#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,d,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        if(((b-a)%(c+d))==0)
        {
            cout<<((b-a)/(c+d))<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }

}