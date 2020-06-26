#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int ara[3],i;
    for(i=0;i<3;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+3);
    if((2*(ara[0]+ara[1]))<=ara[2])
    {
        cout<<ara[0]+ara[1]<<endl;
    }
    else
    {
        cout<<(ara[0]+ara[1]+ara[2])/3<<endl;
    }
}