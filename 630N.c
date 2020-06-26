#include<stdio.h>
int main ()
{
    int a,b,c;
    double d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    e=(-b+d)/(2.0*a);
    f=(-b-d)/(2.0*a);
    if(e>f)
    {
        printf("%lf\n%lf\n",e,f);
    }
    else
    {
        printf("%lf\n%lf\n",f,e);
    }

}