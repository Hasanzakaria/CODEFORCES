#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int>divisor[10000];
vector<int>::iterator k;
bool ara[100000];
void sieve(int k)
{
   int i,r,j;
   r=sqrt(k);
   ara[1]=1;
   for(i=4;i<=k;i+=2)
   {
       ara[i]=1;
   }
   for(i=3;i<=r;i+=2)
   {
       if(!ara[i])
       {
           for(j=i*i;j<=k;j+=i*2)
           {
               ara[j]=1;
           }
       }
   }

}
int main ()
{
    int n=3000,r,i,cou=0,p=0,j;
    sieve(3000);
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=r;j+=i)
        {
            divisor[j].push_back(i);
        }
    }
    for(i=1;i<=r;i++)
    {
        cou=0;
        for(k=divisor[i].begin();k!=divisor[i].end();k++)
        {
            if(ara[*k]==0)
            {
                cou++;
                if(cou>2)
                {
                    break;
                }
            }
        }
        if(cou==2)
        {
           p++;
        }
    }
    cout<<p;


}