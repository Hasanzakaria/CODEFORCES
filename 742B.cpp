#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int a,b,i,l,cou=0,j,f=0;
    cin>>a>>b;
    int ara[a];
    for(i=0; i<a; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+a);
    for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
        {
            l=ara[i]^ara[j];
            if(l==b)
            {
                cou++;
                f=0;
            }
            else
            {
                f++;
            }
            if(f>15)
            {
                f=0;
                break;
            }
        }
    }
    cout<<cou;
}