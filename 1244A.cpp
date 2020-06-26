#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,d,e,pen,pencil;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d>>e;
        pen=a/c;
        if(a%c!=0)
        {
            pen++;
        }
        pencil=b/d;
        if(b%d!=0)
        {
            pencil++;
        }
        if(pen+pencil<=e)
        {
            cout<<pen<<" "<<pencil<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
}