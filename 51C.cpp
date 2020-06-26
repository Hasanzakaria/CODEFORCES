#include<bits/stdc++.h>
using namespace std;
long long int n;
double ara[300000];
double bisection(double low,double high)
{
    double mid,temp;
    long long int i,cou;
    while(high-low>=.00000001)
    {
        mid=(low+high)/2;
        cou=1;
        temp=2*mid+ara[0];
        for(i=0;i<n;i++)
        {
            if(ara[i]>temp)
            {
                cou++;
                temp=ara[i]+2*mid;
            }
        }
        if(cou>3)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }

    }
    return low;
}
int main ()
{
    long long int i,cou=0;
    double k,temp;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&ara[i]);
    }
    sort(ara,ara+n);
    k=bisection(0,1e9);
    printf("%.8lf\n",k);
    temp=k+ara[0];
    printf("%.8lf ",temp);
    temp=2*k+ara[0];
    cou=1;
    for(i=0;i<n;i++)
    {
        if(ara[i]>temp&&ara[i]-temp>0.001)
        {
           printf("%.8lf ",k+ara[i]);
           temp=ara[i]+2*k;
           cou++;
        }
    }
    for(i=cou+1;i<=3;i++)
    {
        printf("%.8lf ",ara[n-1]);
    }

}