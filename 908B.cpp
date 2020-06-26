#include<bits/stdc++.h>
using namespace std;
int a,b,row1,row2,row3,row4,col1,col2,col3,col4;
int obs[50][50];
int main ()
{
    string ac;
    int i,j,t,r,tt,rr,k,l,g,pes1,pes2,cou=0;
    cin>>a>>b;
    char jak[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            cin>>jak[i][j];
            if(jak[i][j]=='#')
            {
                obs[i][j]=-1;
            }
            else if(jak[i][j]=='S')
            {
                t=i;
                r=j;
            }
            else if(jak[i][j]=='E')
            {
                tt=i;
                rr=j;
            }
        }
    }
    cin>>ac;
    for(i=0; i<=3; i++)
    {
        if(i==0)
        {
            row1=0;
            col1=1;
        }
        else if(i==1)
        {
            row1=0;
            col1=-1;
        }
        else if(i==2)
        {
            row1=1;
            col1=0;
        }
        else if(i==3)
        {
            row1=-1;
            col1=0;
        }
        for(j=0; j<=3; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(j==0)
            {
                row2=0;
                col2=1;
            }
            else if(j==1)
            {
                row2=0;
                col2=-1;
            }
            else if(j==2)
            {
                row2=1;
                col2=0;
            }
            else if(j==3)
            {
                row2=-1;
                col2=0;
            }
            for(k=0; k<=3; k++)
            {
                if(i==k||j==k)
                {
                    continue;
                }
                if(k==0)
                {
                    row3=0;
                    col3=1;
                }
                else if(k==1)
                {
                    row3=0;
                    col3=-1;
                }
                else if(k==2)
                {
                    row3=1;
                    col3=0;
                }
                else if(k==3)
                {
                    row3=-1;
                    col3=0;
                }
                for(l=0; l<=3; l++)
                {
                    if(i==l||j==l||k==l)
                    {
                        continue;
                    }
                    if(l==0)
                    {
                        row4=0;
                        col4=1;
                    }
                    else if(l==1)
                    {
                        row4=0;
                        col4=-1;
                    }
                    else if(l==2)
                    {
                        row4=1;
                        col4=0;
                    }
                    else if(l==3)
                    {
                        row4=-1;
                        col4=0;
                    }
                    pes1=t;
                    pes2=r;
                    for(g=0;g<ac.size();g++)
                    {
                        if(ac[g]=='0')
                        {
                            pes1+=row1;
                            pes2+=col1;
                        }
                        else if(ac[g]=='1')
                        {
                            pes1+=row2;
                            pes2+=col2;
                        }
                        else if(ac[g]=='2')
                        {
                            pes1+=row3;
                            pes2+=col3;
                        }
                        else if(ac[g]=='3')
                        {
                            pes1+=row4;
                            pes2+=col4;
                        }
                        if(obs[pes1][pes2]==-1||pes1<0||pes1>=a||pes2<0||pes2>=b)
                        {
                            break;
                        }
                        if(pes1==tt&&pes2==rr)
                        {
                          cou++;
                          break;
                        }
                    }
                }
            }

        }
    }
    cout<<cou<<endl;

}