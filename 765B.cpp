#include<iostream>
using namespace std;
int ara[26];
bool tak[26];
int main ()
{
    string a;
    cin>>a;
    int k,i,r,flag=0,ka=0,j,l=0;
    k=a.size();
    for(i=0;i<k;i++)
    {
        l=0;
        r=a[i]-97;
        ara[r]++;
        tak[r]=1;
        for(j=0;j<26;j++)
        {
            if(!tak[j])
            {
                l=1;
            }
            else if(tak[j]&&l)
            {
                ka=1;
            }

        }
    }
    for(i=0;i<26;i++)
    {
        if(!ara[i])
        {
          flag=1;
        }
        else if(ara[i]&&flag==1)
        {
          ka=1;
        }
    }
    if(ka==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}