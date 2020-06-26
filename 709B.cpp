#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long int a,b,i,k,j,r,t,l,p=0,flag=0,x=0,w,o;
    cin>>a>>b;
    long long int ara[a+1];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    ara[i]=b;
    sort(ara,ara+a+1);
    for(i=0;i<=a;i++)
    {
        if(ara[i]==b)
        {
            k=i;
            break;
        }
    }
    for(i=k+1,j=k-1;  ;i++,j--)
    {
        flag=0;
        if(i<=a&&j>=0)
        {
           r=ara[i]-ara[k];
           t=ara[k]-ara[j];
           if(r<t)
           {
             l=r;
             flag=1;

           }
           else
           {
               l=t;
               flag=2;
           }
           p=p+l;
           x++;
           if(x==a-1)
           {
               break;
           }
           p=p+(ara[i]-ara[j]);
           x++;
           if(x==a-1)
           {
               break;
           }
           if(flag==1)
           {
               k=j;
           }
           else if(flag==2)
           {
               k=i;
           }

        }
        else
        {
            if(i>a)
            {

                for(o=k;o>0;o--)
                {
                   p=p+(ara[o]-ara[o-1]);

                   x++;
                   if(x==a-1)
                   {
                      break;
                   }

                }
            }
            else if(j<0)
            {
               for(o=k;o<a;o++)
               {
                  p=p+(ara[o+1]-ara[o]);
                  x++;

                  if(x==a-1)
                  {
                    break;
                  }
               }

            }
            break;
        }
        if(x==a-1)
        {
            break;
        }


    }

    cout<<p;

}