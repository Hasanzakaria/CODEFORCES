#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,l,first,second;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        l=a/c;
        if(b<=l)
        {
            first=b;
            second=0;
            b=0;
        }
        else
        {
           first=l;
           b-=l;
           second=b/(c-1);
           if(b%(c-1)!=0)
           {
               second++;
           }
        }
        cout<<first-second<<"\n";
    }
}