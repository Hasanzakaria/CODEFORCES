#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,c,d,e,l,j,t,flag=0;
    cin>>a>>b;
    pair<int,int>ara[a];
    for(i=1;i<=a;i++)
    {
        cin>>c>>d>>e;
        l=d-c+1;
        ara[i-1].first=e;
        ara[i-1].second=l;
    }
    sort(ara,ara+a);
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(ara[i].second+ara[j].second>b)
            {
                break;
            }
            if(ara[i].second+ara[j].second==b)
            {
               t=ara[i].first+ara[j].first;
               flag=1;
               break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<t<<endl;
    }

}