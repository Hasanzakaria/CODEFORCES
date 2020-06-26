#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,i,bb=0,g,cou=0;
    cin>>a>>b>>c;
    g=c;
    for(i=1;i<=c+1;i++)
    {
        if(bb<=a&&g<=b)
        {
            cou++;
        }
        bb++;
        g--;
    }
    cout<<cou<<"\n";

}