#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,cou=1,flag1=0,flag2=0;
    cin>>n;
    char ch;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        if(flag1==1&&flag2==1&&ch=='f')
        {
            cou=((cou%1000000007)*(2%1000000007))%1000000007;
            flag2=0;
        }
        else if(ch=='f')
        {
            flag1=1;
        }
        else if(ch=='s'&&flag1==1)
        {
            flag2=1;
        }
    }
    cout<<cou<<endl;
}