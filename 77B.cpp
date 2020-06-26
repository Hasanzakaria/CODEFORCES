#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,i,a,b;
    double area,num,p,x;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a==b&&a==0)
        {
            printf("1\n");
        }
        else if(b==0)
        {
            printf("1\n");
        }
        else if(a==0)
        {
            printf("0.5\n");
        }
        else
        {
            area=a*(2*b);
            num=area/2.0;
            p=a/4.0;
            if(p<=b)
            {
                num+=(0.5)*a*p;
                printf("%.9lf\n",num/area);
            }
            else
            {
               x=area;
               area=area-(0.5*b*(4*b));
                printf("%.9lf\n",area/x);
            }

        }
    }


}