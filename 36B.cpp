#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i,j,t,r,p,u,l,f,k,d,m;
    cin>>a>>b;
    l=a;
    char jak[300][300],model[a][a];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            cin>>jak[i][j];
            model[i][j]=jak[i][j];
        }
    }
    for(m=2; m<=b; m++)
    {
        p=a;
        a=a*l;
        char tak[a][a];
        for(i=0; i<p; i++)
        {
            for(j=0; j<p; j++)
            {
                if(jak[i][j]=='.')
                {
                    u=i*l;
                    f=j*l;
                    for(k=u; k<u+l; k++)
                    {
                        for(d=f; d<f+l; d++)
                        {
                            tak[k][d]=model[k-u][d-f];
                        }
                    }
                }
                else
                {
                    u=i*l;
                    f=j*l;
                    for(k=u; k<u+l; k++)
                    {
                        for(d=f; d<f+l; d++)
                        {
                            tak[k][d]='*';
                        }
                    }
                }
            }
        }
        for(i=0; i<a; i++)
        {
            for(j=0; j<a; j++)
            {
                jak[i][j]=tak[i][j];
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<jak[i][j];
        }
        cout<<"\n";
    }

}