#include<bits/stdc++.h>
using namespace std;
int n,r,even,odd;
int ara[1010],dip[101][101];
int dp(int i,int j)
{
  int x,yy;
  if(i==n)
  {
      return 0;
  }
  int y,t,u;
  if(dip[i][j]!=-1)
  {
      return dip[i][j];
  }
  if(ara[i]%2==0)
  {
      even--;
  }
  else
  {
      odd--;
  }
  x=even;
  yy=odd;
  if(even==odd&&even!=0)
  {
    y=ara[i]-ara[i+1];
    if(y<0)
    {
        y=-y;
    }
    if(j+y<=r)
    {
        t=1+dp(i+1,j+y);
    }
    else
    {
        t=0;
    }
    even=x;
    odd=yy;
    u=dp(i+1,j);
    dip[i][j]= max(t,u);
    return dip[i][j];
  }
   dip[i][j]=dp(i+1,j);
   return dip[i][j];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    int i,k;
    cin>>n>>r;
    for(i=0;i<n;i++)
    {
       cin>>ara[i];
       if(ara[i]%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
    }
    memset(dip,-1,sizeof(dip));
    k=dp(0,0);
    cout<<k<<endl;

}