#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[10000];
    gets(jak);
    int k,i,r,t,a,p,ara[5],m=0,ka,l=1,f,flag=0,s,bama,roby=0,tak=0;
    k=strlen(jak);
    for(i=0;i<k;i++)
    {
        if(jak[i]=='.')
        {
            r=i;
        }
        if(jak[i]=='e')
        {
            t=i;
            break;
        }
    }
    a=(t-r)-1;
    for(i=t+1;i<k;i++)
    {
        p=jak[i]-48;
        ara[m]=p;
        m++;
    }
    for(i=m-1;i>=0;i--)
    {
        if(i==m-1)
        {
          ka=1*ara[i];
          continue;
        }
        l=l*10;
        ka=ka+(l*ara[i]);
    }
    f=a-ka;
    if(f==0)
    {
        for(i=0;i<t;i++)
        {
            if(jak[i]!='0'&&jak[i]!='.')
            {
                flag=1;
            }
            if(jak[i]=='.')
            {
                continue;
            }
            if(flag==1)
            {
               printf("%c",jak[i]);
            }

        }
    }
    else if(f<0)
    {
        for(i=0;i<t;i++)
        {
            if(jak[i]!='0'&&jak[i]!='.')
            {
                flag=1;
            }
            if(jak[i]=='.')
            {
                continue;
            }
            if(flag==1)
            {
              printf("%c",jak[i]);
            }

        }
        f=-f;
        for(i=1;i<=f;i++)
        {
            printf("0");
        }
    }
    else
    {
      s=t-f;
      for(i=t-1;i>=s;i--)
      {
          if(jak[i]!='0')
          {
             flag=1;
             bama=i;
             break;
          }

      }
      if(flag==1)
      {
         for(i=0;i<=bama;i++)
         {
           if(i==s)
           {
              if(roby==0)
              {
                  printf("0");
              }
              printf(".");
              roby=1;
           }
           if(jak[i]!='0'&&jak[i]!='.')
           {
             roby=1;
           }


          if(jak[i]=='.')
          {
              continue;
          }
          if(roby==1)
          {
              printf("%c",jak[i]);
          }

        }
      }
      else
      {
         for(i=0;i<s;i++)
         {
             if(jak[i]!='0'&&jak[i]!='.')
             {
                 tak=1;
             }
             if(jak[i]=='.')
             {
                 continue;
             }
             if(tak==1)
             {
                 printf("%c",jak[i]);
             }
         }
         if(tak==0)
         {
             printf("0");
         }
      }

    }


}