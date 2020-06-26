#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //ios_base::sync_with_stdio(0);
    long long int n,m,i,j,f;
    double q,ans=-2,p;
    scanf("%I64d %I64d",&n,&m);
    long long int ara[n],tak[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    tak[0]=ara[0];
    for(i=1;i<n;i++)
    {
        tak[i]=tak[i-1]+ara[i];
    }
    for(i=m;i<=n;i++)
    {
        p=i;
        for(j=0;j<=(n-i);j++)
        {
          f=(j+i)-1;
          if(j==0)
          {
             q=tak[f];
          }
          else
          {
              q=tak[f]-tak[j-1];
          }
          q/=p;
          if(q>ans)
          {
              ans=q;
          }

        }
    }
     printf("%.9lf\n",ans);
}