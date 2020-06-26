#include<bits/stdc++.h>
using namespace std;
int sum;
int ara[4];
int rec(int f,int t)
{
    if(f==4)
    {
        if((sum-t)==t)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int u,r;
    u=rec(f+1,t+ara[f]);
    r=rec(f+1,t);
    return max(u,r);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,k;
    for(i=0;i<4;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    k=rec(0,0);
    if(k==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }


}