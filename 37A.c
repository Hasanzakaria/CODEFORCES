#include<stdio.h>
int main ()
{
    int a,i,j,temp,count=0,t,p=1,d=1;
    scanf("%d",&a);
    int ara[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        if(i==0)
        {
          count++;
        }
        else
        {
            if(ara[i]!=ara[i-1])
            {
                count++;
            }
        }
    }

   for(i=0;i<a;i++)
   {
       p=1;
       for(j=i-1;j>=0;j--)
       {
           if(ara[i]==ara[j])
           {
              p++;
           }

       }
        if(p>d)
        {
            d=p;
        }
   }
   printf("%d %d",d,count);

}