#include<stdio.h>
int main ()
{
    int n,a=0,b=0,c=0,k,flag=0,j=0,x=0,y=0,r=0;
    scanf("%d",&n);
    int ara[n],i,tak[n],faq[n],jak[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==1)
        {
            a++;
            tak[j]=i+1;
            j++;

        }
        else if(ara[i]==2)
        {
            b++;
            faq[x]=i+1;
            x++;
        }
        else if(ara[i]==3)
        {
            c++;
            jak[y]=i+1;
            y++;
        }

    }
    if(a<b)
    {
       k=a;
    }
    else
    {
        k=b;
    }
    if(c<k)
    {
        k=c;
    }
    printf("%d\n",k);
    for( ; ; )
    {
        if(k>0)
        {
            printf("%d %d %d\n",tak[r],faq[r],jak[r]);
            r++;
        }
        else
        {
            break;
        }
        k--;
    }


}