#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,j,r1,r2,flag=0,c1,c2,l1,l2,x,r,cou=0,t=0;
    cin>>a>>b;
    char jak[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            cin>>jak[i][j];
            if(jak[i][j]=='B')
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(jak[i][j]=='B'&&t==0)
            {
                t=1;
                r1=i;
                r2=i;
            }
            else if(jak[i][j]=='B'&&t==1)
            {
                r2=i;
            }
        }
    }
    t=0;
    for(i=0; i<b; i++)
    {
        for(j=0; j<a; j++)
        {
            if(jak[j][i]=='B'&&t==0)
            {
                c1=i;
                c2=i;
                t=1;
            }
            else if(jak[j][i]=='B'&&t==1)
            {
                c2=i;
            }
        }
    }
    l1=r2-r1+1;
    l2=c2-c1+1;
    x=max(l1,l2);
    if(x>a||x>b)
    {
        cout<<-1<<endl;
        flag=0;
    }
    r=l1-l2;
    if(r<0)
    {
        r=-r;
    }
    for(i=r1; i<=r2; i++)
    {
        for(j=c1; j<=c2; j++)
        {
            if(jak[i][j]=='W')
            {
                cou++;
            }
        }
    }
    if(flag==1)
    {
        cou+=r*x;
        cout<<cou<<endl;
    }

}