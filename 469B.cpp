#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,d,i,k,r,j,f,t,g,h,l,coun=0;
    cin>>a>>b>>c>>d;
    int ara[a][2],jak[b][2],faq[d+1];
    for(i=0;i<a;i++)
    {
        cin>>ara[i][0]>>ara[i][1];
    }
    for(i=0;i<b;i++)
    {
        cin>>jak[i][0]>>jak[i][1];
    }
    for(i=c;i<=d;i++)
    {
        faq[i]=0;
    }
    for(i=0;i<b;i++)
    {
        if(jak[i][0]<jak[i][1])
        {
            k=jak[i][0];
            r=jak[i][1];
        }
        else
        {
            k=jak[i][1];
            r=jak[i][0];
        }
        for(j=0;j<a;j++)
        {
           if(ara[j][0]<ara[j][1])
           {
               f=ara[j][0];
               t=ara[j][1];
           }
           else
           {
               f=ara[j][1];
               t=ara[j][0];
           }
           g=f-r;
           h=t-k;
           for(l=g;l<=h;l++)
           {
               if(l>=c&&l<=d)
               {
                  if(faq[l]==0)
                  {
                      coun++;
                      faq[l]=1;
                  }
               }
           }


        }
    }
    cout<<coun;
}