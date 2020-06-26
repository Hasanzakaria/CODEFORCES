#include<iostream>
#include<math.h>
using namespace std;
bool mark[1001];
int prime[1000],p;
void sieve(int n)
{
    mark[1]=1;
    int i,k,j;
    k=sqrt(n);
    prime[p++]=2;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[p++]=i;
            if(i<=k)
            {
                for(j=i*i; j<=n; j+=2*i)
                {
                    mark[j]=1;
                }
            }

        }
    }

}
int main ()
{
    int m,n,i,l,o,t,cou=0,j;
    cin>>m>>n;
    sieve(m);
    for(i=2; i<=m; i++)
    {
        if(!mark[i])
        {
            l=i-1;
            t=l;
            for(j=0;j<p;j++)
            {
                t=t-prime[j]-prime[j+1];
                if(t==0)
                {
                  cou++;
                  break;
                }
                else if(t<0)
                {
                    break;
                }
                else
                {
                   t=l;
                }
            }


        }
    }
    if(cou>=n)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}