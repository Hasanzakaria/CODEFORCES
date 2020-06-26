#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,i,sum=0,t,cou,f,ans=0,l;
    cin>>a>>b>>c;
    int ara[b];
    for(i=0;i<b;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+b);
    for(i=0;i<=a;i++)
    {
        t=c;
        cou=0;
        f=0;
        t-=(sum*i);
        if(t<0)
        {
            break;
        }
        cou+=(b*i)+i;
        while(t>0)
        {
            t-=(ara[f]*(a-i));
            if(t>=0)
            {
                cou+=(a-i);
            }
            f++;
            if(f==b)
            {
                break;
            }
        }
        if(t<0)
        {
            t+=(ara[f-1]*(a-i));
            while(t>0)
            {
                t-=ara[f-1];
                if(t>=0)
                {
                    cou++;
                }
            }
        }
        ans=max(ans,cou);

    }
    cout<<ans<<endl;
}