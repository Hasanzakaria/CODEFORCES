#include<iostream>
using namespace std;
int main ()
{
    int a,i,k,flag=0,j,f=0,r=0;
    cin>>a;
    char jak[a+1];
    cin>>jak;
    for(i=0;i<a;i++)
    {
       k=jak[i]-48;
       if(k!=4&&k!=7)
       {
          flag=1;
          break;
       }
    }
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
      for(i=0,j=a-1;i<=j;i++,j--)
      {
         k=jak[i]-48;
         f=f+k;
         k=jak[j]-48;
         r=r+k;

      }
      if(f==r)
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NO";
      }
    }


}