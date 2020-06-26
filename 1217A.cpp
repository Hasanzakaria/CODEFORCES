#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,k,cou=0,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        cin>>a>>b>>c;
        k=a+c;
        if(k>b)
        {
            cou++;
            l=k-b;
            if(l%2==0)
            {
                cou+=(l/2)-1;
            }
            else
            {
                cou+=(l/2);
            }
        }
        if(cou>=c+1)
        {
            cout<<c+1<<"\n";
        }
        else
        {
            cout<<cou<<"\n";
        }
    }
 
}