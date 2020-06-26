#include<stdio.h>
int main ()
{
    char a[1000],b[1000],c[1000];
    int i,j,l,k=0,count=0,m=0,r;
    gets(a);
    for(l=0;a[l]!='\0';l++)
    {

    }
    for(i=0;i<100;i++)
    {
        for(j=k;j<l;j++)
        {
            if(a[j]!='a'&&a[j]!='A'&&a[j]!='e'&&a[j]!='E'&&a[j]!='i'&&a[j]!='I'&&a[j]!='o'&&a[j]!='O'&&a[j]!='u'&&a[j]!='U'&&a[j]!='y'&&a[j]!='Y')
            {
                b[i]=a[j];
                k=j+1;
                count++;
                break;
            }
        }
    }
    r=2*count;
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            c[i]='.';
        }
        else if(i%2==1&&b[m]>=65&&b[m]<=90)
        {
            c[i]=b[m]+32;
            m++;

        }
        else if(i%2!=0)
        {
            c[i]=b[m];
            m++;
        }
    }
    c[i]='\0';
    printf("%s",c);


}