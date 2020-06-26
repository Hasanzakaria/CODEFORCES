#include<stdio.h>
int main ()
{
    int a,i,k,p=0,l=0,m=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&k);
        if(i%3==1)
        {
            p=p+k;
        }
        else if(i%3==2)
        {
          l=l+k;
        }
        else if(i%3==0)
        {
            m=m+k;
        }
    }
    if(p>m&&p>l)
    {
        printf("chest");
    }
    else if(m>p&&m>l)
    {
        printf("back");
    }
    else if(l>m&&l>p)
    {
        printf("biceps");
    }
}