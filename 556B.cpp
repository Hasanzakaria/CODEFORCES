#include<iostream>
using namespace std;
int main ()
{
    int a,i,flag=0,coun=0;
    cin>>a;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for( ; ; )
    {
       flag=0;
       for(i=0;i<a;i++)
       {
         if(i%2==0)
         {
            ara[i]++;
            if(ara[i]>a-1)
            {
                ara[i]=0;
            }
         }
         else
         {
            ara[i]--;
            if(ara[i]<0)
            {
                ara[i]=a-1;
            }
         }
      }
      for(i=0;i<a;i++)
      {
        if(ara[i]!=i)
        {
          flag=1;
        }
      }
      coun++;
      if(flag==0||coun==a)
      {
          break;
      }

    }
    if(flag==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


}