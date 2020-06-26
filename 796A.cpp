#include<iostream>
using namespace std;
int main ()
{
    int n,m,k,i,j,cou=0;
    cin>>n>>m>>k;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=m-2,j=m;i>=0||j<n;i--,j++)
    {
        cou+=10;
        if(i>=0)
        {
            if(ara[i]!=0&&ara[i]<=k)
            {
                cout<<cou<<endl;
                break;
            }
        }
        if(j<n)
        {
            if(ara[j]!=0&&ara[j]<=k)
            {
                cout<<cou<<endl;
                break;
            }
        }
    }


}