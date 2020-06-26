#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[1500],ch;
    gets(jak);
    int k,i,r,flag=0,j;
    k=strlen(jak);
    for(i=0,j=k-1;i<=j;i++,j--)
    {

       if(jak[i]!='A'&&jak[i]!='H'&&jak[i]!='I'&&jak[i]!='M'&&jak[i]!='O'&&jak[i]!='o'&&jak[i]!='T'&&jak[i]!='v'&&jak[i]!='V'&&jak[i]!='W'&&jak[i]!='w'&&jak[i]!='X'&&jak[i]!='x'&&jak[i]!='Y'&&jak[i]!='b'&&jak[i]!='d'&&jak[i]!='U'&&jak[i]!='p'&&jak[i]!='q')
       {
         flag=1;
         break;
       }
       else
       {
          ch=jak[i];
          if(ch!=jak[j])
          {
              flag=1;
          }
          if(ch=='b')
          {
              if(jak[j]=='d')
              {
                flag=0;
              }
              else
              {
                 flag=1;
                 break;
              }
          }
          if(ch=='d')
          {
              if(jak[j]=='b')
              {
                 flag=0;
              }
              else
              {
                 flag=1;
                 break;
              }
          }
          if(ch=='p')
          {
              if(jak[j]=='q')
              {
                flag=0;
              }
              else
              {
                 flag=1;
                 break;
              }
          }
          if(ch=='q')
          {
              if(jak[j]=='p')
              {
                flag=0;
              }
              else
              {
                 flag=1;
                 break;
              }
          }


        }
        if(flag==1)
        {
            break;
        }


    }
    if(flag==0)
    {
        printf("TAK");
    }
    else
    {
        printf("NIE");
    }

}