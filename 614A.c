#include<stdio.h>
#include<math.h>
int main ()
{
    long long int n,m,x,p,r,k=1,l,t,flag=0;
    scanf("%I64d %I64d %I64d",&n,&m,&x);
    p=log(n)/log(x);
    r=log(m)/log(x);
    if(n==1)
    {
        printf("1 ");
        flag=1;

    }
    if(p!=0)
    {
        l=p;
        for( ; ; )
        {
           if(l>0)
           {
               k=k*x;
           }
           else
           {
               break;
           }
           l--;
        }
        if(k>=n && k<=m)
        {
            printf("%I64d ",k);
            flag=1;
        }
    }


    t=r-p;
    for( ; ; )
    {
        if(t>0)
        {
            k=k*x;
            if(k>=n && k<=m)
            {
               printf("%I64d ",k);
               flag=1;
            }

        }
        else
        {
            break;
        }
        t--;
    }
    if(flag==0)
    {
        printf("-1");
    }


}