#include<iostream>
using namespace std;
int main ()
{
    int n,i,b=-1,k=0,j;
    cin>>n;
    int ara[n],tak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=n-1;i>=0;i--)
    {
        if(ara[i]>=b)
        {
            b=ara[i];
            tak[k]=b;
            k++;
        }
    }
    j=k-1;
    for(i=0;i<n;i++)
    {
        if(ara[i]<tak[j])
        {
            cout<<tak[j]-ara[i]+1<<" ";
        }
        else if((ara[i]==tak[j])&&(tak[j]==tak[j-1])&&j!=0)
        {
            cout<<1<<" ";
            j--;
        }
        else
        {
            cout<<0<<" ";
            j--;
        }
    }
}