#include<iostream>
using namespace std;
int main ()
{
    int a,k,r,flag=0,f,t,p,coun=0;
    cin>>a;
    f=a;
    p=a;
    for( ; ; )
    {
        k=f;
        flag=0;
        for( ;k%10!=0||k/10!=0; )
        {
            r=k%10;
            if(r==8||r==-8)
            {
              flag=1;
              break;
            }
            k/=10;
        }
        if(flag==1&&coun>0)
        {
          t=f-p;
          cout<<t;
          break;
        }
        f++;
        coun++;

    }
}