#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n,k,r,i,v,cou=0,l=0,flag=0;
    cin>>n>>k;
    v=n;
    r=sqrt(n);
    for(i=2;i<=r;i++)
    {
        while(v%i==0)
        {
            cou++;
            v/=i;
        }

    }
    if(v>1)
    {
        cou++;
    }
    if(cou<k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        v=n;
        for(i=2;i<=r;i++)
        {
            if((k-1)==l)
            {
                break;
            }
            while(v%i==0)
            {
               v/=i;
               cout<<i<<" ";
               l++;
               if(k-1==l)
               {
                   flag=1;
                   break;
               }
            }
            if(flag==1)
            {
                break;
            }
        }
        cout<<v<<endl;

    }


}