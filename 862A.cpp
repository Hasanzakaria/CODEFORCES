#include<bits/stdc++.h>
using namespace std;
bool fara[300];
int main ()
{
    int a,b,i,k,cou=0;
    cin>>a>>b;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
        fara[ara[i]]=1;
    }
    for(k=0;k<b;k++)
    {
        if(fara[k]==0)
        {
            cou++;
        }
    }
    if(fara[b]==1)
    {
        cou++;
    }
    cout<<cou<<endl;

}