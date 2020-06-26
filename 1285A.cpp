#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0,cou1=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            cou++;
        }
        else
        {
            cou1++;
        }
    }
    cou=-cou;
    cout<<cou1-cou+1<<"\n";

}