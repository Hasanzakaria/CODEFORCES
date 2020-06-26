#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long double a,b,c,d,e,f,k,l,ff,ll;
    cin>>a>>b>>c>>d>>e>>f;
    k=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    l=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));
    if(k==l)
    {
        ff=(d-b)/(c-a);
        ll=(f-d)/(e-c);
        if(ff==ll)
        {
          cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
}