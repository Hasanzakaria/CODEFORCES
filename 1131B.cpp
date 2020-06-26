#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,maxx=0,l=1,minn=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(min(a,b)-maxx>=0)
        {
            l+=min(a,b)-maxx;
            if(maxx!=minn)
            {
                l++;
            }
        }
        maxx=max(a,b);
        minn=min(a,b);

    }
    cout<<l<<"\n";
}