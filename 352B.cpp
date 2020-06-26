#include<stdio.h>
#include<algorithm>
int main ()
{
   int a,i,k=0,flag=0,r,t=0,y=0;
   scanf("%d",&a);
   std::pair<int,int>ara[a];
   std::pair<int,int>fara[a];
   for(i=0;i<a;i++)
   {
       scanf("%d",&ara[i].first);
       ara[i].second=i+1;
   }
   std::sort(ara,ara+a);
   for(i=0;i<a-1;i++)
   {
       if(ara[i].first==ara[i+1].first)
       {
          if(flag==0)
          {
              k=ara[i+1].second-ara[i].second;
              flag=1;
          }
          else
          {
              r=ara[i+1].second-ara[i].second;
              if(k!=r)
              {
                t=1;
              }
          }

       }
       else
       {
          if(t==0)
          {
              fara[y].first=ara[i].first;
              fara[y].second=k;
              y++;
          }
          k=0;
          flag=0;
          t=0;
       }

   }
   if(t==0)
   {
      fara[y].first=ara[i].first;
      fara[y].second=k;
      y++;
   }
   printf("%d\n",y);
   for(i=0;i<y;i++)
   {
       printf("%d %d\n",fara[i].first,fara[i].second);
   }

}