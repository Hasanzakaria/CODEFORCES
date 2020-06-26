#include<iostream>
using namespace std;
bool dragon[100001];
int main ()
{
    int a,b,c,d,n,i,cou=0;
    cin>>a>>b>>c>>d>>n;
    for(i=a;i<=n;i+=a)
    {
        dragon[i]=1;
    }
    for(i=b;i<=n;i+=b)
    {
        dragon[i]=1;
    }
    for(i=c;i<=n;i+=c)
    {
        dragon[i]=1;
    }
    for(i=d;i<=n;i+=d)
    {
        dragon[i]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(dragon[i])
        {
           cou++;
        }
    }
    cout<<cou;

}