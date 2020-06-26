#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n,i,m,j,k,cou=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cin>>m;
    int tak[m];
    bool yak[m];
    for(i=0;i<m;i++)
    {
        yak[i]=0;
    }
    for(i=0;i<m;i++)
    {
        cin>>tak[i];
    }
    sort(ara,ara+n);
    sort(tak,tak+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           k=ara[i]-tak[j];
           if((k==1||k==0||k==-1)&&yak[j]==0)
           {
               yak[j]=1;
               cou++;
               break;
           }
        }
    }
    cout<<cou;
}