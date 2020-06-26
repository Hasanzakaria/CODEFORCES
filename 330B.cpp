#include<iostream>
using namespace std;
bool ara[1001];
int main ()
{
    int a,b,i,k,l,f;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        cin>>k>>l;
        ara[k]=1;
        ara[l]=1;
    }
    for(i=1;i<=a;i++)
    {
        if(!ara[i])
        {
           f=i;
           break;
        }
    }
    cout<<a-1<<endl;
    for(i=1;i<=a;i++)
    {
        if(f==i)
        {
            continue;
        }
        cout<<f<<" "<<i<<endl;
    }

}