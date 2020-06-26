#include<stdio.h>
int main ()
{
    double a,b,c,d,x,r,p,t;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    x=3.14159265*(a/2)*d*(a/2);
    if(x>=c)
    {
        printf("NO");
    }
    else
    {
       r=c-x;
       p=3.14159265*(a/2)*(a/2)*b;
       t=p/r;
       printf("YES\n%.12lf",t);

    }
}