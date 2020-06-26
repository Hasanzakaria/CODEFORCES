#include<stdio.h>
#include<algorithm>
int main ()
{
    int a,coun=0,temp,k;
    scanf("%d",&a);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    std::sort(ara,ara+a);
    for(i=0;i<a-1;i++)
    {
        if(ara[i+1]==ara[i])
        {
            ara[i+1]=ara[i+1]+1;
            coun++;
        }
        if(ara[i+1]<ara[i])
        {
           temp=ara[i+1];
           ara[i+1]=ara[i]+1;
           k=ara[i+1]-temp;
           coun=coun+k;

        }
    }
    printf("%d",coun);


}