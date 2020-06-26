#include<stdio.h>
int main ()
{
    int a,b,c,count=0;
    scanf("%d",&a);
    for(b=a;b%10!=0||b/10!=0;b=b/10)
    {
       c=b%10;
       if(c==4||c==7)
       {
            count++;
       }
    }
    if(count==4||count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}