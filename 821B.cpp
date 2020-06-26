#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,y,x,k,l,i,j,kk=0;
    cin>>a>>b;
    y=b;
    x=a*b;
    if(x%2==0&&y%2==0)
    {
        k=x/2;
        l=y/2;
        for(i=0; i<=k; i++)
        {
            for(j=0; j<=l; j++)
            {
                kk+=i+j;
            }
        }
        cout<<kk<<endl;
    }
    else if(x%2!=0&&y%2!=0)
    {
        k=x/2;
        l=y/2;
        k++;
        for(i=0; i<=k; i++)
        {
            for(j=0; j<=l; j++)
            {
                kk+=i+j;
            }
        }
        cout<<kk<<endl;

    }
    else
    {
        if(x%2==0)
        {
            k=(x/2)+1;
            l=(y/2);
        }
        else if(y%2==0)
        {
            l=(y/2)+1;
            k=(x/2);
        }
        for(i=0; i<=k; i++)
        {
            for(j=0; j<=l; j++)
            {
                kk+=i+j;
            }
        }
        cout<<kk<<endl;
    }


}