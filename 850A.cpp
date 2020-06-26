#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
struct temp
{
    int a,b,c,d,e;
};
int main ()
{
    int n,i,j,l,r,t,y,u,ii,rr,tt,yy,uu,iii,angle,flag=0,cou=0;
    double o,p,pp,pi=3.14159;
    cin>>n;
    temp jak[n];
    for(i=0;i<n;i++)
    {
        cin>>jak[i].a>>jak[i].b>>jak[i].c>>jak[i].d>>jak[i].e;
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            for(l=j+1;l<n;l++)
            {
                if(l==i||l==j)
                {
                    continue;
                }
                r=jak[j].a-jak[i].a;
                t=jak[j].b-jak[i].b;
                y=jak[j].c-jak[i].c;
                u=jak[j].d-jak[i].d;
                ii=jak[j].e-jak[i].e;
                rr=jak[l].a-jak[i].a;
                tt=jak[l].b-jak[i].b;
                yy=jak[l].c-jak[i].c;
                uu=jak[l].d-jak[i].d;
                iii=jak[l].e-jak[i].e;
                o=(r*rr)+(t*tt)+(y*yy)+(u*uu)+(ii*iii);
                p=sqrt((r*r)+(t*t)+(y*y)+(u*u)+(ii*ii));
                pp=sqrt((rr*rr)+(tt*tt)+(yy*yy)+(uu*uu)+(iii*iii));
                angle=((acos(o/(p*pp)))*180)/pi;
                if(angle<90&&flag==0)
                {
                  flag=1;
                  mp[i]=1;
                  cou++;
                  goto battle_symphony;
                }
            }
        }
        battle_symphony:;
    }
    cout<<n-cou<<endl;
    for(i=0;i<n;i++)
    {
        if(mp[i]==0)
        {
            cout<<i+1<<endl;
        }
    }

}