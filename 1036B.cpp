#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,c,k,l,cou,f,t,r,o;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        k=min(a,b);
        l=max(a,b);
        cou=k;
        o=(l-k)%2;
        cou+=(l-k)-o;
        f=k+(l-k);
        t=c-f;
        if(t<0)
        {
            cout<<-1<<"\n";
        }
        else
        {
            r=t%2;
            if(r==0)
            {
                cou+=t;
            }
            else
            {
                cou+=(t-1);
                if(o==1)
                {
                    cou++;
                }
                else
                {
                    cou--;
                }
            }
            cout<<cou<<"\n";
        }
    }
 
}