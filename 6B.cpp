#include<bits/stdc++.h>
using namespace std;
long long int tx[]={1,-1,0,0},ty[]={0,0,1,-1};
set<char>s;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,k,e,r;
    char ch;
    cin>>n>>m;
    cin>>ch;
    char jak[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>jak[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(jak[i][j]==ch)
            {
                for(k=0;k<4;k++)
                {
                   e=i+tx[k];
                   r=j+ty[k];
                   if(e>=0&&e<n&&r>=0&&r<m&&jak[e][r]!=ch&&jak[e][r]!='.')
                   {
                      s.insert(jak[e][r]);
                   }
                }
            }
        }
    }
    cout<<s.size()<<"\n";
}