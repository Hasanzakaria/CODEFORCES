#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,k,i,j,h,t;
    cin>>n>>m;
    k=(n*4)-(n*2);
    k-=(2*2);
    h=m/2;
    t=k/2;
    if(m>k)
    {
        cout<<"NO"<<endl;
    }
    else if(m%2==1)
    {
        if(m>t)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=1; i<=4; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(i==1||j==1||i==4||j==n)
                    {
                        cout<<".";
                    }
                    else if(m>0)
                    {
                        cout<<"#";
                        m--;
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                cout<<endl;
            }
        }
    }
    else if(m%2==0)
    {
        cout<<"YES"<<endl;
        for(i=1; i<=4; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==1||j==1||i==4||j==n)
                {
                    cout<<".";
                }
                else if(i==2&&h>0)
                {
                    cout<<"#";
                    m--;
                    h--;
                }
                else if(i==3&&m>0)
                {
                    cout<<"#";
                    m--;
                }
                else
                {
                    cout<<".";
                }

            }
            cout<<endl;
        }
    }

}