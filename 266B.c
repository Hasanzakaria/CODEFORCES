#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d ",&a,&b);
    char ch[a+1];
    gets(ch);
    int i,j;
    for(i=1;i<=b;i++)
    {
        for(j=0;j<a;j++)
        {
            if(ch[j]=='B'&&ch[j+1]=='G')
            {
                ch[j+1]='B';
                ch[j]='G';
                j++;
            }
        }
    }
    printf("%s",ch);
}