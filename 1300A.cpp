#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,cou,sum,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        sum=0;
        cin>>a;
        f=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(ara[j]==0)
            {
              cou++;
            }
            sum+=ara[j];
        }
        if(sum+cou==0)
        {
            cou++;
        }
        cout<<cou<<"\n";
    }

}