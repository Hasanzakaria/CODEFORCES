#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,c,d,e,j,cou;
    cin>>a>>b;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=b;i++)
    {
        cou=0;
        cin>>c>>d>>e;
        for(j=c-1;j<d;j++)
        {
            if(ara[j]<ara[e-1])
            {
              cou++;
            }
        }
        if(cou==e-c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}