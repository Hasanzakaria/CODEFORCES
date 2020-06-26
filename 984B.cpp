#include<bits/stdc++.h>
using namespace std;
int x[8]= {0,0,1,-1,1,-1,1,-1};
int y[8]= {1,-1,0,0,1,1,-1,-1};
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,j,l,p,cp,t,r,flag=0,s;
    cin>>n>>m;
    char ch[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>ch[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(ch[i][j]=='.')
            {
                cp=0;
                for(l=0; l<8; l++)
                {
                    t=i+x[l];
                    r=j+y[l];
                    if((t>=0&&t<n)&&(r>=0&&r<m))
                    {
                        if(ch[t][r]=='*')
                        {
                            cp++;
                        }
                    }
                }
                if(cp!=0)
                {
                    flag=1;
                }
            }
            else if(ch[i][j]!='.'&&ch[i][j]!='*')
            {
                cp=0;
                s=ch[i][j]-48;
                for(l=0; l<8; l++)
                {
                    t=i+x[l];
                    r=j+y[l];
                    if((t>=0&&t<n)&&(r>=0&&r<m))
                    {
                        if(ch[t][r]=='*')
                        {
                            cp++;
                        }
                    }
                }
                if(cp!=s)
                {
                    flag=1;
                }
            }
        }
    }
     if(flag==0)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }

}