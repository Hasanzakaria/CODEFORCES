#include<stdio.h>
int main ()
{
    int a,b,i,j,temp,count=0;
    scanf("%d %d",&a,&b);
    int ara[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-1;j++)
        {
            if(ara[j]<ara[j+1])
            {
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        b=b-ara[i];
        if(b>0)
        {
          count++;
        }
    }
    printf("%d",count+1);


}