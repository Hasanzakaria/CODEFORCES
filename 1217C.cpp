#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j,zero,l,u,value,ans;
    string a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        k=a.size();
        zero=0;
        ans=0;
        for(j=0; j<k; j++)
        {
            if(a[j]=='0')
            {
                zero++;
            }
            else
            {
                value=0;
                for(l=0; l<=20; l++)
                {
                    value*=2;
                    u=l+j;
                    if(u<k)
                    {
                        value+=a[u]-48;
                        if(l+1+zero>=value)
                        {
                            ans++;
                        }
                    }

                }
                zero=0;
            }

        }
        cout<<ans<<"\n";
    }
}