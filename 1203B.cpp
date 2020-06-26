#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int q,i,a,j,k,cou,flag,area;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a;
        cou=a;
        flag=0;
        area=-1;
        long long int ara[4*a];
        for(j=0;j<4*a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+(4*a));
        j=0;
        k=(4*a)-1;
        while(cou)
        {
            if(ara[j]==ara[j+1]&&ara[k]==ara[k-1])
            {
                if(area==-1)
                {
                    area=ara[j]*ara[k];
                }
                else if(area!=(ara[j]*ara[k]))
                {
                    flag=1;
                }

            }
            else
            {
               flag=1;
            }
            cou--;
            j+=2;
            k-=2;
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}