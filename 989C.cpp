#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,d,i,j;
    cin>>a>>b>>c>>d;
    char jak[48][48];
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
            if(i<12)
            {
                jak[i][j]='A';
            }
            else if(i<24)
            {
                jak[i][j]='B';
            }
            else if (i<36)
            {
                jak[i][j]='C';
            }
            else
            {
                jak[i][j]='D';
            }
        }
    }
    a--;
    b--;
    c--;
    d--;
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
            if(i<12)
            {
                if(i%2==0&&(i+j)%2==0&&b>0)
                {
                    jak[i][j]='B';
                    b--;
                }
            }
            else if(i<24)
            {
                if(i%2==0&&(i+j)%2==0&&c>0)
                {
                    jak[i][j]='C';
                    c--;
                }
            }
            else if(i<36)
            {
                if(i%2==0&&(i+j)%2==0&&d>0)
                {
                    jak[i][j]='D';
                    d--;
                }
            }
            else
            {
                if(i%2==0&&(i+j)%2==0&&a>0)
                {
                    jak[i][j]='A';
                    a--;
                }
            }
        }
    }
    cout<<48<<" "<<48<<endl;
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
            cout<<jak[i][j];
        }
        cout<<endl;
    }
}