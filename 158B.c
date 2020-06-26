#include<stdio.h>
int main ()
{
    int n,i,b,count=0,p=0,l=0,r=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        if(b==4)
        {
          count++;
        }
        else if(b==3)
        {
            count++;
            p++;
        }
        else if(b==2)
        {
           l++;
        }
        else if(b==1)
        {
          r++;
        }

    }
    if(r>=p)
    {
        r=r-p;
    }
    else
    {
        r=0;
    }
    l=l*2;
    k=(r+l);
    if(k%4==0)
    {
        k=k/4;
        count=count+k;
    }
    else
    {
      k=k/4;
      count=count+k+1;

    }
    printf("%d",count);
}