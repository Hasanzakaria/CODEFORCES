#include<iostream>
using namespace std;
int main ()
{
    int a,k,i,j,l;
    string b;
    cin>>a;
    char jak[a+1];
    cin>>b;
    if(a%2!=0)
    {
        k=a/2;
        jak[k]=b[0];
        l=1;
        for(i=k-1,j=k+1;i>=0&&j<a;i--,j++)
        {
            jak[i]=b[l];
            l++;
            jak[j]=b[l];
            l++;
        }
        jak[a]='\0';
        cout<<jak;
    }
    else
    {
        k=a/2;
        k--;
        jak[k]=b[0];
        l=1;
        for(i=k-1,j=k+1;i>=0&&j<a;i--,j++)
        {
            jak[j]=b[l];
            l++;
            jak[i]=b[l];
            l++;
        }
        jak[j]=b[l];
        jak[a]='\0';
        cout<<jak;

    }
}