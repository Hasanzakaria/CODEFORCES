#include<stdio.h>
#include<string.h>
int main ()
{
        char jak[150];
        gets(jak);
        int k,i,l=0,p=0,r=0,x=0,count=0;
        k=strlen(jak);
        for(i=0;i<k;i++)
        {
             if(jak[i]=='n')
             {
                 l++;
             }
             else if(jak[i]=='e')
             {
                 p++;
             }
             else if(jak[i]=='i')
             {
                 r++;
             }
             else if(jak[i]=='t')
             {
                x++;
             }
        }
        l=l+(r-1); 
        for( ; ; )
        {
                l-=3;
                p-=3;
                r--;
                x--;
                if(l>=0&&p>=0&&r>=0&&x>=0)
                {
                     count++;
                }
                else
                {
                        break;
                }

        }
        printf("%d",count);

}