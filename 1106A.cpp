#include<bits/stdc++.h>
using namespace std;
int tx[]={-1,-1,1,1},ty[]={-1,1,-1,1};
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,txx,tyy,cou,ans=0;
    cin>>n;
    char ch[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ch[i][j]=='X')
            {
               cou=0;
               for(k=0;k<4;k++)
               {
                   txx=i+tx[k];
                   tyy=j+ty[k];
                   if((txx>=0&&txx<n)&&(tyy>=0&&tyy<n)&&ch[txx][tyy]=='X')
                   {
                      cou++;
                   }
               }
               if(cou==4)
               {
                  ans++;
               }
            }
        }
    }
    cout<<ans<<"\n";
}