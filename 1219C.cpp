#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,f,l,i,flag=0,carry=0;
    cin>>n;
    string s,c;
    cin>>s;
    k=s.size();
    if(k%n==0)
    {
        for(i=n; i<k; i++)
        {
            l=i%n;
            if(s[l]<s[i])
            {
                flag=1;
                break;
            }
            else if(s[l]>s[i])
            {
                flag=2;
                break;
            }
        }
        if(flag==1||flag==0)
        {
            for(i=n-1; i>=0; i--)
            {
                if(s[i]=='9')
                {
                    carry=1;
                    s[i]='0';
                }
                else if(carry!=0)
                {
                    s[i]=s[i]+1;
                    carry=0;
                    break;
                }
                else
                {
                    s[i]=s[i]+1;
                    break;
                }
            }
        }
        if(carry!=0)
        {
           for(i=0;i<k+n;i++)
           {
               l=i%n;
               if(l==0)
               {
                   c+='1';
               }
               else
               {
                   c+='0';
               }
           }
        }
        else
        {
            for(i=0; i<k; i++)
            {
                l=i%n;
                c+=s[l];
            }
        }
    }
    else
    {
        f=k/n;
        f++;
        f*=n;
        for(i=0; i<f; i++)
        {
            l=i%n;
            if(l==0)
            {
                c+='1';
            }
            else
            {
                c+='0';
            }
        }
    }
    cout<<c<<endl;
}