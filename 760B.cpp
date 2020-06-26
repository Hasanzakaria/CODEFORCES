#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,k,cou=1,r=0,i;
    cin>>a>>b>>c;
    k=b-a;
    if(c==1||c==a)
    {
       for(i=1;i<a;i++)
       {
           k--;
           if(k>=0)
           {
               cou++;
           }
           else
           {
               break;
           }
           r++;
           k=k-r;
       }
       if(k>0)
       {
           for( ; ; )
           {
               k--;
               if(k>=0)
               {
                   cou++;
               }
               else
               {
                   break;
               }
               k=k-r;

           }
       }
       cout<<cou;
    }
    else
    {
        r=1;
        for(i=c+1;i<=a;i++)
        {
            k--;
            if(k>=0)
            {
                cou++;
            }
            else
            {
                break;
            }
            r=2*r;
            k=k-r;
            r++;

        }
        if(k>0)
        {
            for( ; ; )
            {
                k--;
                if(k>=0)
                {
                    cou++;
                }
                else
                {
                    break;
                }
                k=k-r;

            }

        }
        cout<<cou;
    }
}