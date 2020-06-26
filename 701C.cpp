#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    int a,i,k=0,temp1,flag=0,kara=0,temp;
    scanf("%d ",&a);
    int tak[a];
    pair<char,int>jak[a+1];
    for(i=0;i<a;i++)
    {
        scanf("%c",&jak[i].first);
        jak[i].second=i+1;
    }
     for(i=0;i<a-1;i++)
    {
        if(jak[i].first!=jak[i+1].first)
        {
            temp1=jak[i].second;
            kara=1;
            break;

        }
    }


    sort(jak,jak+a);
    temp=jak[0].second;

    for(i=0;i<a-1;i++)
    {

        if(jak[i].first!=jak[i+1].first)
        {
            tak[k]=temp;
            k++;
            temp=jak[i+1].second;

        }
    }
    tak[k]=temp;
    k++;
    sort(tak,tak+k);
    if(kara==0)
    {
      printf("1");
    }
    else
    {
        printf("%d",(tak[k-1]-temp1)+1);
    }


}