#include<bits/stdc++.h>
using namespace std;
long long int ara[26];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long long int k,i,f,j,flag;
    k=s.size();
    for(i=0;i<k;i++)
    {
        flag=0;
        f=s[i]-'a';
        for(j=0;j<f;j++)
        {
            if(ara[j]!=0)
            {
               flag=1;
            }
        }
        ara[f]++;
        if(flag==1)
        {
            cout<<"Ann\n";
        }
        else
        {
            cout<<"Mike\n";
        }
    }
}