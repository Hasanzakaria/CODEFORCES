#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[2000];
    gets(jak);
    int a,i,t=0,r=0,x,count=0,flag=0,f;
    double k,p;
    scanf("%d",&a);
    k=strlen(jak);
    p=k/a;
    f=p;
    x=p;
    char ara[a][f+1],faq[a][f+1];
    if(x!=p)
    {
        printf("NO");
        flag=1;
    }
    if(flag==0)
    {
      for(i=0;i<=k;i++)
      {
         if(x>0)
         {
            ara[t][r]=jak[i];
            faq[t][r]=jak[i];
            r++;
            x--;
         }
         else
         {
            ara[t][r]='\0';
            faq[t][r]='\0';
            strrev(faq[t]);
            if(!strcmp(ara[t],faq[t]))
            {
               count++;
               t++;
               r=0;
               x=p;
               i--;
            }
            else
            {
                break;
            }
         }
      }
      if(count==a)
      {
        printf("YES");
      }
      else
      {
        printf("NO");
      }
    }

}