#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,x,i,cou=0;
    cin>>n>>m>>x;
    string b;
    cin>>b;
    for(i=n-1;i>=0;i--)
    {
        if(x>=0)
        {
           if(x!=0)
           {
               if(b[i]!='0')
               {
                   cou++;
               }
               x--;
               m--;
           }
           else
           {
               if(b[i]!='1')
               {
                   cou++;
               }
               x--;
               m--;
           }
        }
        else if(m>0)
        {
            if(b[i]!='0')
            {
                cou++;
            }
            m--;
        }
        else
        {
            break;
        }

    }
    cout<<cou<<"\n";
}