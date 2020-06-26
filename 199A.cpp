#include<iostream>
using namespace std;
int ara[10000000],p;
void fibonacci(int k)
{
   int a=0,b=1,c=0;
   ara[p++]=0;
   ara[p++]=1;
   while(c<=k)
   {
       c=a+b;
       ara[p++]=c;
       a=b;
       b=c;
   }

}
int main ()
{
    int n,k,flag=0,i,j;
    cin>>n;
    fibonacci(n);
    for(i=0;i<p-1;i++)
    {
        k=3*ara[i];
        if(k==n)
        {
            flag=1;
            cout<<ara[i]<<" "<<ara[i]<<" "<<ara[i];
            goto dhaka;
        }
    }
    for(i=0;i<p-3;i++)
    {
        for(j=i;j<p-2;j++)
        {
            k=ara[i]+ara[j]+ara[j+1];
            if(k==n)
            {
                flag=1;
                cout<<ara[i]<<" "<<ara[j]<<" "<<ara[j+1];
            }
        }
    }
    dhaka:;
    if(flag==0)
    {
        cout<<"I'm too stupid to solve this problem";
    }
}