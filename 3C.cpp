#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char ara[3][3];
    long long int i,j,x=0,o=0,dot=0,t,f,one=0,two=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]=='X')
            {
                x++;
            }
            else if(ara[i][j]=='0')
            {
                o++;
            }
            else
            {
                dot++;
            }
        }
    }
    if(x==o||x==o+1)
    {
        for(i=0;i<3;i++)
        {
            t=0;
            f=0;
            for(j=0;j<3;j++)
            {
               if(ara[i][j]!='X')
               {
                   t=1;
               }
               if(ara[i][j]!='0')
               {
                   f=1;
               }
            }
            if(t==0)
            {
               one=1;
            }
            if(f==0)
            {
               two=1;
            }
        }
        for(i=0;i<3;i++)
        {
            t=0;
            f=0;
            for(j=0;j<3;j++)
            {
               if(ara[j][i]!='X')
               {
                   t=1;
               }
               if(ara[j][i]!='0')
               {
                   f=1;
               }
            }
            if(t==0)
            {
               one=1;
            }
            if(f==0)
            {
               two=1;
            }
        }
        if((ara[0][0]=='X'&&ara[1][1]=='X'&&ara[2][2]=='X')||(ara[2][0]=='X'&&ara[1][1]=='X'&&ara[0][2]=='X'))
        {
            one=1;
        }
        if((ara[0][0]=='0'&&ara[1][1]=='0'&&ara[2][2]=='0')||(ara[2][0]=='0'&&ara[1][1]=='0'&&ara[0][2]=='0'))
        {
            two=1;
        }
        if((one==1&&two==1)||(one==1&&x==o)||(two==1&&x==o+1))
        {
            cout<<"illegal\n";
        }
        else if(one==1)
        {
            cout<<"the first player won\n";
        }
        else if(two==1)
        {
           cout<<"the second player won\n";
        }
        else
        {
            if(dot>0)
            {
                if(x==o)
                {
                    cout<<"first\n";
                }
                else
                {
                    cout<<"second\n";
                }
            }
            else
            {
                cout<<"draw\n";
            }
        }
    }

    else
    {
       cout<<"illegal\n";
    }
}