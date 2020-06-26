#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k,cou,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cou=0;
        for(j=1;j<=9;j++)
        {
            k=j;
            while(k<=a)
            {
               cou++;
               k*=10;
               k+=j;
            }
        }
        cout<<cou<<"\n";
    }
}