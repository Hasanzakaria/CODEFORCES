#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,i,f;
    cin>>a>>b;
    long long int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+a);
    if(b==0)
    {
        if(ara[0]-1==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ara[0]-1<<endl;
        }
        return 0;
    }
    f=b-1;
    if(f+1<a&&ara[f]==ara[f+1])
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ara[f];
    }


}