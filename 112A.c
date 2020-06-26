#include<stdio.h>
int string_compare(char a[],char b[],int c,int d)
{
        int i;
        for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
        {
                if(a[i]>b[i])
                {
                        return 1;
                }
                else if(a[i]<b[i])
                {
                        return -1;
                }
        }
        if(c==d)
        {
                return 0;
        }
        if(c>d)
        {
                return 1;
        }
        if(c<d)
        {
                return -1;
        }
}
int main ()
{
        char jak[200],tak[200];
        int x,y,i,m;
        gets(jak);
        gets(tak);
        for(x=0;jak[x]!='\0';x++)
        {

        }
        for(y=0;tak[y]!='\0';y++)
        {

        }
        for(i=0;i<x;i++)
        {
                if(jak[i]>=65&&jak[i]<=90)
                {
                        jak[i]=jak[i]+32;
                }
        }
        for(i=0;i<y;i++)
        {
                if(tak[i]>=65&&tak[i]<=90)
                {
                        tak[i]=tak[i]+32;
                }
        }
        m=string_compare(jak,tak,x,y);
        printf("%d",m);

}