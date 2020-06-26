#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
map<long long int,long long int>cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,n,i,f,j,k,flag,u=1,t;
    string s;
    cin>>tt>>n;
    for(i=1; i<=tt; i++)
    {
        cin>>s;
        t=0;
        if(s=="alloc")
        {
            cin>>f;
            for(j=1; j<=n-f+1; j++)
            {
                flag=0;
                for(k=j; k<=j+f-1; k++)
                {
                    if(mp[k]!=0)
                    {
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    t=1;
                    for(k=j; k<=j+f-1; k++)
                    {
                        mp[k]=u;
                    }
                    break;
                }
            }
            if(t==1)
            {
                cout<<u<<"\n";
                cp[u]=1;
                u++;
            }
            else
            {
                cout<<"NULL\n";
            }
        }
        else if(s=="erase")
        {
            cin>>f;
            if(cp[f]==1)
            {
               cp[f]=0;
               for(j=1;j<=n;j++)
               {
                   if(mp[j]==f)
                   {
                       break;
                   }
               }
               for(k=j;k<=n;k++)
               {
                   if(mp[k]==f)
                   {
                       mp[k]=0;
                   }
                   else
                   {
                       break;
                   }
               }
            }
            else
            {
                cout<<"ILLEGAL_ERASE_ARGUMENT\n";
            }
        }
        else
        {
           for(j=1;j<=n;j++)
           {
               if(mp[j]!=0)
               {
                   for(k=1;k<j;k++)
                   {
                       if(mp[k]==0)
                       {
                          t=1;
                          break;
                       }
                   }
                   if(t==1)
                   {
                      mp[k]=mp[j];
                      mp[j]=0;
                   }
               }
           }
        }
    }

}