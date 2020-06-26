#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int m,n,cou=1,r=1,f;
    cin>>m>>n;
    while(1)
    {
        f=r;
        r=r*n;
        if((r/n)!=f)
        {
            break;
        }
        if(m-r+1<=0)
        {
            break;
        }
        cou=((cou%1000000007)+((m-r+1)%1000000007))%1000000007 ;
    }
    cout<<cou<<"\n";


}