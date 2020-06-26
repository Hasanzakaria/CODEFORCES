#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,j,a,b,c,d,xmin,xmax,ymin,ymax,e,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        xmin=-100000;
        xmax=100000;
        ymin=-100000;
        ymax=100000;
        cin>>x;
        for(j=1;j<=x;j++)
        {
            cin>>e>>f>>a>>b>>c>>d;
            if(a==0)
            {
                xmin=max(xmin,e);
            }
            if(c==0)
            {
                xmax=min(xmax,e);
            }
            if(b==0)
            {
               ymax=min(ymax,f);
            }
            if(d==0)
            {
                ymin=max(ymin,f);
            }
        }
        if(xmin<=xmax&&ymin<=ymax)
        {
            cout<<1<<" "<<xmin<<" "<<ymin<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }

    }


}