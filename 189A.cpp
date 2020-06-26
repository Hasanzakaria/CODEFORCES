#include<stdio.h>
#include<algorithm>
int main ()
{
    int n,ara[3],i,k,l,x,p,coun,j,z=1;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        scanf("%d",&ara[i]);
    }
    std::sort(ara,ara+3);
    k=n/ara[0];
    for(i=k;i>=0;i--)
    {
       coun=1;
       l=n-(i*ara[0]);
       x=l/ara[1];
       for(j=x;j>=0;j--)
       {
         p=l-(j*ara[1]);
         if(p%ara[2]==0)
         {
           coun=i+j+(p/ara[2]);
           break;
         }
       }
       if(coun>z)
       {
           z=coun;
       }


    }
    printf("%d",z);
}