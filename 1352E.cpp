#include<bits/stdc++.h>
using namespace std;
long long int ara1[8001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,j,k,sum,cou,t;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a;
        cou=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            sum=0;
            t=0;
            for(k=j;k<a;k++)
            {
                sum+=ara[k];
                t++;
                if(sum>8000)
                {
                    break;
                }
                if(t>1)
                {
                  ara1[sum]=1;
                }

            }
        }
        for(j=0;j<a;j++)
        {
            if(ara1[ara[j]]==1)
            {
                cou++;
            }
        }
        memset(ara1,0,sizeof(ara1));
        cout<<cou<<"\n";
    }

}