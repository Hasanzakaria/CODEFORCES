#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        if(a==1)
        {
            cout<<-1<<"\n";
        }
        else
        {
           if((a-1)%3==0)
           {
               for(j=1;j<a-1;j++)
               {
                   cout<<2;
               }
               cout<<33<<"\n";
           }
           else
           {
               for(j=1;j<a;j++)
               {
                   cout<<2;
               }
               cout<<3<<"\n";
           }
        }

    }

}