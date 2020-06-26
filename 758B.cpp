#include<iostream>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    int k,i,r,b,y,g,j,rr=0,bb=0,yy=0,gg=0;
    k=a.size();
    for(i=0; i<k; i++)
    {
        if(a[i]=='R')
        {
            r=i;
        }
        else if(a[i]=='B')
        {
            b=i;
        }
        else if(a[i]=='Y')
        {
            y=i;
        }
        else if(a[i]=='G')
        {
            g=i;
        }
    }
    for(i=r+4,j=r-4; ; i+=4,j-=4)
    {
        if(i<k)
        {
            if(a[i]=='!')
            {
                rr++;
            }
        }
        if(j>=0)
        {
            if(a[j]=='!')
            {
                rr++;
            }
        }
        if(i>=k&&j<0)
        {
            break;
        }
    }
    for(i=b+4,j=b-4; ; i+=4,j-=4)
    {
        if(i<k)
        {
            if(a[i]=='!')
            {
                bb++;
            }
        }
        if(j>=0)
        {
            if(a[j]=='!')
            {
                bb++;
            }
        }
        if(i>=k&&j<0)
        {
            break;
        }
    }
    for(i=y+4,j=y-4; ; i+=4,j-=4)
    {
        if(i<k)
        {
            if(a[i]=='!')
            {
                yy++;
            }
        }
        if(j>=0)
        {
            if(a[j]=='!')
            {
                yy++;
            }
        }
        if(i>=k&&j<0)
        {
            break;
        }
    }
    for(i=g+4,j=g-4; ; i+=4,j-=4)
    {
        if(i<k)
        {
            if(a[i]=='!')
            {
                gg++;
            }
        }
        if(j>=0)
        {
            if(a[j]=='!')
            {
                gg++;
            }
        }
        if(i>=k&&j<0)
        {
            break;
        }
    }
    cout<<rr<<" "<<bb<<" "<<yy<<" "<<gg<<endl;
}