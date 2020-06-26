#include<stdio.h>
int main ()
{
    int a,b,i,c,count=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(b%i==0)
        {
            c=b/i;
            if(c<=a)
            {
                count++;
            }
        }
    }
    printf("%d",count);


}