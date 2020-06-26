#include<stdio.h>
int main ()
{
    int a,b,c,d,flag=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a+b>c&&b+c>a&&c+a>b)||(b+c>d&&c+d>b&&d+b>c)||(c+d>a&&d+a>c&&a+c>d)||(d+a>b&&a+b>d&&b+d>a))
    {
       printf("TRIANGLE");
       flag=1;
    }
    if(flag==0)
    {
        if((a+b>=c&&b+c>=a&&c+a>=b)||(b+c>=d&&c+d>=b&&d+b>=c)||(c+d>=a&&d+a>=c&&a+c>=d)||(d+a>=b&&a+b>=d&&b+d>=a))
        {
            printf("SEGMENT");
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("IMPOSSIBLE");
    }

}