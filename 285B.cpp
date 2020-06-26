#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,i,cou=0,flag=0;
    cin>>a>>b>>c;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=a+1;i++)
    {
        if(b==c)
        {
            flag=1;
            break;
        }
        b=ara[b-1];
        cou++;
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<cou<<endl;
    }

}