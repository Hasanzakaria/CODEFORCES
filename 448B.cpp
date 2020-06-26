#include<bits/stdc++.h>
using namespace std;
int ara[26],jak[26];
int main ()
{
    ios_base::sync_with_stdio(0);
    string a,b;
    int k,i,t,flag=0,flagg=0,l,r=0,cou=0;
    cin>>a>>b;
    k=b.size();
    for(i=0; i<k; i++)
    {
        t=b[i]-97;
        ara[t]++;
    }
    k=a.size();
    l=b.size();
    for(i=0; i<k; i++)
    {
        t=a[i]-97;
        jak[t]++;
    }
    for(i=0; i<26; i++)
    {
        if(ara[i]>jak[i])
        {
            flag=1;
        }
        else if(ara[i]<jak[i])
        {
            flagg=1;
        }
    }
    if(flag==1)
    {
        cout<<"need tree"<<endl;
    }
    else if(flagg==1)
    {
        for(i=0; i<l; i++)
        {
            for( ; ; )
            {
                if(b[i]==a[r])
                {
                    cou++;
                    r++;
                    break;
                }
                r++;
                if(r==k)
                {
                    break;
                }
            }
            if(r==k)
            {
                break;
            }

        }
        if(cou==l)
        {
            cout<<"automaton"<<endl;
        }
        else
        {
            cout<<"both"<<endl;
        }
    }
    else
    {
        cout<<"array"<<endl;
    }


}