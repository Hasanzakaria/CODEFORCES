#include<bits/stdc++.h>
using namespace std;
long long int a,b,check[101][101][11][3];
long long int dp(long long int m,long long int n,long long int x,long long int y)
{
   if(x==a+1&&y==1)
   {
       return 0;
   }
   else if(x==b+1&&y==2)
   {
       return 0;
   }
   if(m==0&&n==0)
   {
       return 1;
   }
   if(m<0||n<0)
   {
       return 0;
   }
   if(check[m][n][x][y]!=-1)
   {
       return check[m][n][x][y];
   }
   long long int p,t;
   if(y==0)
   {
       p=dp(m-1,n,x+1,1);
       t=dp(m,n-1,x+1,2);
   }
   else if(y==1)
   {
      p=dp(m-1,n,x+1,1);
      t=dp(m,n-1,1,2);
   }
   else
   {
      p=dp(m-1,n,1,1);
      t=dp(m,n-1,x+1,2);
   }
   check[m][n][x][y]=(p+t)%100000000;
   return check[m][n][x][y];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k;
    cin>>n>>m>>a>>b;
    memset(check,-1,sizeof(check));
    k=dp(n,m,0,0);
    cout<<k<<"\n";
}