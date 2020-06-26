#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,minn=1e15,k,t,ans;
    double a,b;
    cin>>n>>m;
    long long int ara[m],jak[m];
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    jak[0]=ara[0];
    minn=min(minn,jak[0]);
    for(i=1;i<m;i++)
    {
        jak[i]=ara[i]+jak[i-1];
        minn=min(minn,jak[i]);
    }
    if((n+minn)>0&&jak[m-1]>=0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        k=-n;
        k+=(-1*minn);
        if(k>=0)
        {
            for(i=0;i<m;i++)
            {
                n+=ara[i];
                if(n<=0)
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        else
        {
            k=-k;
            jak[m-1]=-1*jak[m-1];
            a=k;
            b=jak[m-1];
            t=ceil(a/b);
            ans=t*m;
            jak[m-1]=-1*jak[m-1];
            n+=(t*jak[m-1]);
            for(i=0;i<m;i++)
            {
                n+=ara[i];
                ans++;
                if(n<=0)
                {
                    break;
                }
            }
            cout<<ans<<"\n";
        }
    }

}