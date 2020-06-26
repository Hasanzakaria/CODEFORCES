#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,flag,cou;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        cou=0;
        while(a!=1)
        {
            flag=0;
            if(a%2==0)
            {
                a/=2;
                flag=1;
            }
            else if(a%3==0)
            {
                a/=3;
                a*=2;
                flag=1;
            }
            else if(a%5==0)
            {
                a/=5;
                a*=4;
                flag=1;
            }
            if(flag==0)
            {
                break;
            }
            cou++;
        }
        if(a==1)
        {
            cout<<cou<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }

}