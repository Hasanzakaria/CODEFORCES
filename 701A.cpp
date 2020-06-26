#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main ()
{
    int a,i,j;
    scanf("%d",&a);
    pair<int,int>ara[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i].first);
        ara[i].second=i+1;
    }
    sort(ara,ara+a);
    for(i=0,j=a-1;i<=j;i++,j--)
    {
        printf("%d %d\n",ara[i].second,ara[j].second);
    }

}