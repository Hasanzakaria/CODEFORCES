#include<bits/stdc++.h>
using namespace std;
bool check(long long int ax,long long int ay,long long int bx,long long int by,long long int cx,long long int cy)
{
    long long int r,e,f;
    double p,x;
    r=((ax-bx)*(ax-bx))+((ay-by)*(ay-by));
    e=((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy));
    f=((bx-cx)*(bx-cx))+((by-cy)*(by-cy));
    if(r==e+f||e==r+f||f==r+e)
    {
        if(r!=0&&e!=0&&f!=0)
        {
            return 1;
        }
    }
    return 0;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ax,ay,bx,by,cx,cy,k,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    k=check(ax,ay,bx,by,cx,cy);
    if(k==1)
    {
        cout<<"RIGHT\n";
    }
    else
    {
       k1=check(ax-1,ay,bx,by,cx,cy);
       k2=check(ax+1,ay,bx,by,cx,cy);
       k3=check(ax,ay-1,bx,by,cx,cy);
       k4=check(ax,ay+1,bx,by,cx,cy);
       k5=check(ax,ay,bx-1,by,cx,cy);
       k6=check(ax,ay,bx+1,by,cx,cy);
       k7=check(ax,ay,bx,by-1,cx,cy);
       k8=check(ax,ay,bx,by+1,cx,cy);
       k9=check(ax,ay,bx,by,cx-1,cy);
       k10=check(ax,ay,bx,by,cx+1,cy);
       k11=check(ax,ay,bx,by,cx,cy-1);
       k12=check(ax,ay,bx,by,cx,cy+1);
       if(k1||k2||k3||k4||k5||k6||k7||k8||k9||k10||k11||k12)
       {
           cout<<"ALMOST\n";
       }
       else
       {
           cout<<"NEITHER\n";
       }

    }

}