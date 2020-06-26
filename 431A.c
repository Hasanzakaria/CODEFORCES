#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,c,d,e,i,k;
    long long int p=0;
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    char jak[100000];
    gets(jak);
    e=strlen(jak);
    for(i=0;i<e;i++)
    {
       k=jak[i]-48;
       if(k==1)
       {
         p=p+a;
       }
       else if(k==2)
       {
           p=p+b;
       }
       else if(k==3)
       {
           p=p+c;
       }
       else if(k==4)
       {
           p=p+d;
       }
    }
    printf("%I64d",p);

}