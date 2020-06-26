#include<bits/stdc++.h>
using namespace std;
vector<long long int>even,odd;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,flag,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        flag=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(ara[j]%2==0)
            {
                even.push_back(ara[j]);
            }
            else
            {
                odd.push_back(ara[j]);
            }
        }
        if(even.size()%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            for(j=0;j<even.size();j++)
            {
               for(k=0;k<odd.size();k++)
               {
                   if(abs(even[j]-odd[k])==1)
                   {
                       flag=1;
                   }
               }
            }
            if(flag)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        even.clear();
        odd.clear();
    }
 
}