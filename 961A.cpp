#include<bits/stdc++.h>
using namespace std;
int tak[1001];
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,j,flag,cou=0;
    cin>>n>>m;
    int ara[m];
    for(i=0; i<m; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<m; i++)
    {
        flag=0;
        tak[ara[i]]++;
        for(j=1; j<=n; j++)
        {
            if(tak[j]==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            for(j=1; j<=n; j++)
            {
                tak[j]--;
            }
            cou++;
        }
    }
    cout<<cou<<endl;
}