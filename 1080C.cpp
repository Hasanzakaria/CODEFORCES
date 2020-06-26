#include<bits/stdc++.h>
using namespace std;
long long int white,black;
void solve (long long int a,long long int b)
{
    if(b%2==0)
    {
        white=(b/2)*a;
        black=(a*b)-white;
    }
    else
    {
        if(a%2==0)
        {
            white=((a/2)*((b/2)+1))+((a/2)*(b/2));
            black=(a*b)-white;
        }
        else
        {
            white=(((a/2)+1)*((b/2)+1))+((a/2)*(b/2));
            black=(a*b)-white;
        }
    }
}
void solve1(long long int a,long long int b,long long int c,long long int d,long long int o)
{
    long long int w,not_w;
    long long int k,r;
    k=c-a+1;
    r=d-b+1;
    if((a+b)%2==0)
    {
      if(k%2==0)
      {
          w=(k/2)*r;
          not_w=(k*r)-w;
      }
      else
      {
         if(r%2==0)
         {
            w=(((k/2)+1)*(r/2))+((k/2)*(r/2));
            not_w=(k*r)-w;
         }
         else
         {
             w=(((k/2)+1)*((r/2)+1))+((k/2)*(r/2));
             not_w=(k*r)-w;
         }
      }
    }
    else
    {
       if(k%2==0)
       {
           not_w=(k/2)*r;
           w=(k*r)-not_w;
       }
       else
       {
         if(r%2==0)
         {
             not_w=(((k/2)+1)*(r/2))+((k/2)*(r/2));
             w=(k*r)-not_w;
         }
         else
         {
            not_w=(((k/2)+1)*((r/2)+1))+((k/2)*(r/2));
            w=(k*r)-not_w;
         }
       }
    }
    if(o==1)
    {
       white-=w;
       black-=not_w;
       white+=(k*r);
    }
    else if(o==2)
    {
       white-=w;
       black-=not_w;
       black+=(k*r);
    }
    else if(o==3)
    {
        white-=w;
        black-=not_w;
    }
    else
    {
        white+=w;
        black+=not_w;
        white-=(k*r);

    }


}
int main()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,a,b,x,y,z,t,e,r,w,u,left1,left2,right1,right2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        white=0;
        black=0;
        cin>>a>>b;
        solve(a,b);
        cin>>x>>y>>z>>t;
        solve1(x,y,z,t,1);
        cin>>e>>r>>w>>u;
        if(e>z||w<x||r>t||u<y)
        {
             solve1(e,r,w,u,2);
        }
        else
        {
            left1=max(x,e);
            left2=min(z,w);
            right1=max(y,r);
            right2=min(t,u);
            solve1(e,r,w,u,3);
            solve1(left1,right1,left2,right2,4);
            black+=(w-e+1)*(u-r+1);
        }
        cout<<white<<" "<<black<<endl;
    }
}