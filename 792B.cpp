#include<iostream>
using namespace std;
int main ()
{
    int a,b,i,k=1,j,flag;
    cin>>a>>b;
    int jak[a+1],ara[b];
    for(i=1;i<a+1;i++)
    {
        jak[i]=i;
    }
    for(i=0;i<b;i++)
    {
        flag=0;
        cin>>ara[i];
        k=k+ara[i];
        if(k>a)
        {
            k=k%a;
            if(k==0)
            {
                k=a;
            }
        }
        cout<<jak[k]<<" ";
        a--;
        for(j=k;j<=a;j++)
        {
            jak[j]=jak[j+1];
            flag=1;
        }
        if(flag==0)
        {
            k=1;
        }
    }

}