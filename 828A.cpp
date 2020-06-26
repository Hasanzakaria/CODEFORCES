#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,i,cou=0,t=0;
    cin>>a>>b>>c;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
            if(b>0)
            {
                b--;
            }
            else if(c>0)
            {
                c--;
                t++;
            }
            else if(t>0)
            {
                t--;
            }
            else
            {
                cou++;
            }
        }
        else
        {
            if(c>0)
            {
                c--;
            }
            else
            {
               cou+=2;
            }
        }
    }
    cout<<cou;

}